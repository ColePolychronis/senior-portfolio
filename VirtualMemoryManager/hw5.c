// Program to simulate Virtual Memory manager.
// Uses FIFO replacement algorithm in the case of a page fault
//
// Author: Cole Polychronis
// Date: April 23, 2018

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


// masks to find page number and offset
#define offsetMask 0xff
#define pnoMask 0xff00
// number of characters to read for each line from input file
#define BUFFER_SIZE 10
// size of a page
#define CHUNK 256
// size of table
#define tableSize 128
// size of TLB
#define tlbSize 16
// files for addresses to check and representing backing store
FILE    *address_file;
FILE    *backing_store;
// how we store reads from input file
char address[BUFFER_SIZE];
int logical_address;
// 2d array representing physical memory
signed char physicalMemory[tableSize][CHUNK];
// the value of the byte (signed char) in memory
signed char value;

// counters to be used to keep track which table or tlb entry is to be evicted
int evict, evict_tlb = 0;

// structure to model a page table entry
struct tableEntry
{
  int pageNo, frameNo, valid;
};

// function to find an entry in the page table
int findEntry(struct tableEntry pageTable[], int pno){
  for(int i=0; i<tableSize; i++){
    if(pageTable[i].pageNo == pno){
      return pageTable[i].frameNo;
    }
  }
  return -1;
}

// function to initialize the page table
void initializeTable(struct tableEntry pageTable[]){
  for(int i=0; i<tableSize; i++){
    pageTable[i].pageNo = -1;
    pageTable[i].frameNo = -1;
    pageTable[i].valid = -1;
  }
}

// function to add a page table entry to the page table
void addEntry(struct tableEntry pageTable[], int pno, int fno){
  int needToEvict = 1;
  for(int i=0; i<tableSize; i++){
    if(pageTable[i].valid == -1){
      pageTable[i].pageNo = pno;
      pageTable[i].frameNo = fno;
      pageTable[i].valid = 1;
      needToEvict = 0; // enough room, no need to evict
      break;
    }
  }
  // no open spots, evict an entry via FIFO
  if(needToEvict == 1){
    pageTable[evict%tableSize].pageNo = pno;
    pageTable[evict%tableSize].frameNo = fno;
    evict++;
  }
}

// function to find an entry in the tlb
int findEntry_tlb(struct tableEntry tlb[], int pno){
  for(int i=0; i<tlbSize; i++){
    if(tlb[i].pageNo == pno){
      return tlb[i].frameNo;
    }
  }
  return -1;
}

// function to initialize the tlb
void initializeTable_tlb(struct tableEntry tlb[]){
  for(int i=0; i<tlbSize; i++){
    tlb[i].pageNo = -1;
    tlb[i].frameNo = -1;
    tlb[i].valid = -1;
  }
}

// function to add an entry to the tlb
void addEntry_tlb(struct tableEntry tlb[], int pno, int fno){
  int needToEvict = 1;
  for(int i=0; i<tlbSize; i++){
    if(tlb[i].valid == -1){
      tlb[i].pageNo = pno;
      tlb[i].frameNo = fno;
      tlb[i].valid = 1;
      needToEvict = 0; // enough room, no need to evict
      break;
    }
  }
  // no open spots, evict an entry via FIFO
  if(needToEvict == 1){
    tlb[evict_tlb%tlbSize].pageNo = pno;
    tlb[evict_tlb%tlbSize].frameNo = fno;
    evict_tlb++;
  }

}

int main(int argc, char *argv[])
{
  // perform basic error checking
  if (argc != 3) {
      fprintf(stderr,"Usage: ./hw5 [input file] [backing store]\n");
      return -1;
  }
  // open the file containing the backing store
  backing_store = fopen(argv[2], "rb"); // change ../BACKING_STORE.bin to BACKING_STORE.bin
  if (backing_store == NULL) {
      fprintf(stderr, "Error opening backing store file");
      return -1;
  }
  // open the file containing the logical addresses
  address_file = fopen(argv[1], "r");
  if (address_file == NULL) {
      fprintf(stderr, "Error opening %s\n",argv[1]);
      return -1;
  }

  // initial creation of page table
  struct tableEntry pageTable[tableSize];
  initializeTable(pageTable);
  // initial creation of tlb
  struct tableEntry tlb[tlbSize];
  initializeTable_tlb(tlb);

  int i, physical, pageFault, total, tlbHit =0;
  unsigned int offset, pageNo;
  while ( fgets(address, BUFFER_SIZE, address_file) != NULL) {
    //calculate offset and page number
    logical_address = atoi(address);
    offset = logical_address&offsetMask;
    pageNo = (logical_address&pnoMask)>>8;

    // attempt to find entries in tlb and page table
    int physMemIndex = findEntry(pageTable, pageNo);
    int physMemIndex_tlb = findEntry_tlb(tlb, pageNo);

    if(physMemIndex_tlb != -1){ // found entry in tlb
      value = physicalMemory[physMemIndex_tlb][offset];
      physical = physMemIndex_tlb*CHUNK+offset;
      tlbHit++;
    } else if(physMemIndex != -1){ // found entry in page table
      value = physicalMemory[physMemIndex][offset];
      physical = physMemIndex*CHUNK+offset;
    }else{ // not found in table -- page fault
      // seek requested page in the backing store
      if (fseek(backing_store, CHUNK * pageNo, SEEK_SET) != 0) {
          fprintf(stderr, "Error seeking in backing store\n");
          return -1;
      }
      // now read requested page from backing store to physical memory
      if (fread(physicalMemory[i%tableSize], sizeof(signed char), CHUNK, backing_store) == 0) {
          fprintf(stderr, "Error reading from backing store\n");
          return -1;
      }
      // add the requested page into physicalMemory
      addEntry(pageTable, pageNo, i%tableSize);
      // add the requested page into the tlb
      addEntry_tlb(tlb, pageNo, i%tableSize);

      // calculate value and physical address
      value = physicalMemory[i%tableSize][offset];
      physical = (i%tableSize)*CHUNK+offset;
      pageFault++; // increment number of page faults
      i++; // increment counter used to look into physical memory

    }
    total++; // incrememt total number of queries
    printf("Virtual Address: %i  Physical Address: %d Value: %d\n", logical_address,physical,value);
  }
  float tmp = (float)pageFault/total;
  float tmp2 = (float)tlbHit/total;
  printf("\n");
  printf("Page Faults: %d\n", pageFault);
  printf("Page Fault Rate: %.3f\n", tmp);
  printf("TLB Hits: %d\n", tlbHit);
  printf("TLB Hit Rate: %.3f\n", tmp2);

  fclose(address_file);
  fclose(backing_store);

  return 0;
}
