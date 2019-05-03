# Senior Portfolio

### 1. [Chatroom Server and Client Application](https://github.com/ColePolychronis/ChatRoomProject/tree/4563401ba60784c360f9bac90e9f0f1a894ca134)

**Computer Science Learning Goals:**
- acquire significant project experience working both individually and in a group setting (pairs)
- develop effective problem sovling skills

I worked on this project for my Computer Networks (CMPT 352) class at Westminster College. At its core, this final project had three major aspects: develop a chatroom protocol that would be used by both the server and client application we would design, develop a server that could facilitate connections from multiple clients at a time, and develop a client side application that would allow a client to send a message to all connected clients or send a private message to a subset of the clients currently connected. The other key aspect of this chatroom project is that it was a group project (teams of two). This project was significant in that it is one of the first projects in the Westminster CS curriculum where students are given relatively little direction about how to design the software; instead, it is up to the teams to figure out how to best implement the protocol developed by the class as a whole. Ultimately, our class settled on using a JSON-based protocol, and my teammate and I decided on using Java to develop the server and client-side applications, as this would allow us to harness the robust threading libraries that Java has available.

I elected to include this project in my portfolio because I think it is the project that encouraged the most development in my problem solving skills. For one, my partner and I spent roughly a day and a half sketching out our server, our client application, and pseudocode for how to facilitate communcation between the two. Once we had our outline of what the project should look like, we then had engage the project at a lower level and figure out what kinds of datastructures and types we would have to use to ensure that our software was thread safe. This project was also a fantastic way for figuring out how to manage a relatively large software project in a group setting. Specfically, because I was only working with one partner, this project really required me to communicate clearly and effectively, because my partner and I had to be on the same page constantly in order to understand what each of us were supposed to be working on and how the pseudocode we had sketched out was to be split up into smaller tasks. In addition, the collaborative nature of this project encouraged me to become more familiar with Git and Slack, two important tools that will not only be useful to me for the rest of my academic career, but will, I imagine, also be invaluable to me once I start my career in industry.

### 2. [Island Hopper Children's Math Game](https://github.com/ColePolychronis/senior-portfolio/tree/master/IslandHopperGame)

**Computer Science Learning Goals:**
- acquire significant project experience working both individually and in a group setting (group)
- understand the concepts and techniques of software design

**College-Wide Learning Goals:**
- Collaboration

I worked on this project throughout the entire semester for my Computer Software (CMPT 322) class at Westminster College. The project itself is meant to be a way for us as computer science students to get a sense of what working on a project in industry is like. To this end, it is a group project (teams of 4), that consists of three releases and is bound by certain client specifications. For our project specifically, my team and I built a math game targeted at children with the goal of teaching them how to add and subtract numbers, as well as identifying place values, using colorful visuals and engaging game elements. To this end, we developed a creature collection game (similar to popular games such as Pokemon) that required users to visit different islands and answer math questions in order to collect creatures that could be viewed and interacted with upon collection. To implement this vision, we developed our backend using the Spring Boot framework and Java, backed with a PostgreSQL database and developed our frontend using Angular 5.

I wanted to showcase this project in my senior portfolio for two key reasons, with the first of these being that this project was the single most pivotal project in helping me to understand the concepts and techniques of software design. This project required a tremendous amount of planning and revising, with our team spending almost an entire month figuring out the tech-stack that we wanted to use, and then using said stack to develop a proof of concept to showcase for our first release. Throughout the duration of working on this project, my team and I also learned how to break down a software project into smaller user stories and then estimate how much time these stories would take to implement. Finally, this project also required us to become much more comfortable with using Git, both as a means of version control, as well as a means of code sharing. 

The other reason I chose to include this project in my portfolio is that it was also the most substantial experience I have had as far as working in a group setting. The sheer scale of this project meant that it was effectively impossible for one person to undertake, which forced clear communication of what each team member's role was and by extension, what everyone was responsible for getting done. This is something that my team and I were not very good at in the beginning, and as a result, the distribution of work was very unbalanced and the product we showcased for our first release suffered. However, we continued working on building these skills and using the tools available to us (such as Slack and GitHub) to communicate more effectively, and as a result, we had an almost perfect distribution of work between every member of our team and were able to showcase a finished product that we were proud of.

### 3. [Virtual Memory Manager]()

**Computer Science Learning Goals:**
- acquire significant project experience working both individually and in a group setting (individual)
- attain system level understanding of the computer

I worked on this project for my Operating Systems (CMPT 351) class at Westminster College. Being the final project of the semester, this project was meant to assess our overall understanding of operating systems principles and design. In particular, the project charged us individually to write a program which translates logical addresses to physical addresses. This required us to implement a Translation Lookaside Buffer (TLB), as well as a page table. In order to implement these features, we also had to determine how to resolve page faults using demand paging and a First-In-First-Out (FIFO) page replacement strategy. Similar to the Chatroom Server and Client Application above, we were given no starter code for this project, and instead were simply given a project description, a list of pages from our textbook that could be used for reference when designing our program, and a few example files for how to use relevent functions. In contrast to the Networks project, however, we were not allowed to work in groups. This meant that I was completely in charge of the programming process, from skteching out the program structure, to figuring out pseudocode, to actually writing the program.

The reason that I chose to include this project in my portfolio is that I think this project is the single most important project I have worked on in terms of attaining a system level understanding of the computer. I was exposed to ideas like virtual addressing and pages in Computer Systems and Programming (CMPT 251), but in this class, we really had to take the time to understand them and their implementation in order to be successful on our assignments. This class really helped frame my understanding of how software is executed by the computer and why optimization/responsible use of resources provided by the computer is so important. Given this focus on using resources responsibly, I feel like this project was the culmination of everything that we had been learning in Operating System. 

### 4. [Predicting Religion with Flags]()

I worked on this project for my Introduction to Data Mining (CMPT 300B) class at Westminster college. For this project, which was the final project for this class, a group of four of us, which I led, were told to find a dataset that we thought would be interesting to explore, and then build a predictive model on a meaningful response variable. We elected to use the UCI flag [dataset](https://archive.ics.uci.edu/ml/machine-learning-databases/flags/) and specifically, we set out to explore whether we could predict the religious majority of a country based on its flag. This project was largely focused on using some of the data science frameworks available in Python, such as sklearn and scipy, to create data visualization and build predictive models. 

I chose to include this project in my portfolio because this project had a really substantial impact on my decision to go to grad school and what track in computing I was interested in pursuing while I was there. By the time I took this class, I had attended a ten week REU at Worcester Polytechnic Institute that was focused on data visualization. I really enjoyed the work that I did at WPI, but I wanted to explore data science more before I decided on pursuing it or something similar to it in grad school. I really enjoyed the work I did on this project and in particular, I really enjoyed trying to condense about a month's worth of work into a couple visualizations that we could share with the class to help explain our project. This experience not only reinforced my budding interest in data science, but it also helped me to realize that data visualization is really the area of data science that interests me most and that I could see myself pursuing as a career.

### 5. [Single Electron Transistor - Literature Review](https://drive.google.com/file/d/1NwSK047zMFQ12l3UPeeKromaTaU_lBjt/view?usp=sharing)

**College-Wide Learning Goals:**
- Communication

I worked on this project for my Computer Architecture (CMPT 328) class at Westminster College. For this project, we were told to find a research paper pertaining to the field of computer architecture and then prepare a review of the paper for the rest of the class. For my presentation, I reviewed the paper _The Single Electron Transistor_, written by Sanjita Mandal. In her paper, Mandal describes how Quantum Particle properties, specifically quantum tunneling, can be leveraged to force an electron to tunnel through a material when energy is applied, effectively creating a transistor that is roughly 20-100 nanometers wide. Mandal then goes on to discuss some of the problems with implementing a single electron transistor, such as the fact that these transistors only function well at about 100 Kelvin and that the phenomenon of cotunneling can cause multiple electrons to tunnel through a material, which throws off all functionality in the transistor.

My reason for including this presentation in my portfolio is that this project really helped me to develop my communication skills, especially in terms of communicating results from technical papers. This paper was incredibly dense, and also contained a lot of theory from physics which I was not very comfortable with. In order to understand this paper well enough to present it to the class, I had to look up about 10 other research papers that were either cited by this one or that explained principles that were central to the idea behind Single Electron Transistors. While this development in my communication skills was hugely important on its own, the experience of having to pick apart a research paper and then present it to others that had not read the paper is an experience that will serve my well as I move on to attending grad school at the University of Utah. While reading and presenting on this one paper certainly doesn't make me an expert on reading research papers, having some exposure to the process of reading a research paper for comprehension helped demistify the process for me.

### 6. [Homework Helper - Senior Capstone Project]()

**College-Wide Learning Goals:**
- Creativity

When I was considering what I wanted to do for my computer science capstone project, I knew that I wanted to try to tie in my data science senior project. After several project ideas, I ultimately decided on building an application that would allow me to hone some of the skills that I had built up in software engineering while also allowing me to develop my data science knowledge. My app, which I ended up naming Homework Helper, is a mobile application which allows users to add homework assignments to an interface which resmbles a basic calendar application. On the backend, Homework Helper maintains a hierarchical model which uses the assignments that a user has already completed to predict how long similar assignments will take that user in the future. This project design allowed me to further develop skills that I had already started to build with my software engineering project, but it also allowed me to develop new skills - using Python to build a server, as well as conducting data exploration and analysis.

This project was a clear choice for me to include in my senior portfolio, as it was the culmination of my computer science education at Westminster College and really forced me to grow as a developer and a data scientist. However, framing this project in terms of the College-Wide Learning Goals, I think that this project is also the project that I have worked on which best encapsulates the growth in my creativity since starting at Westminster. This project required me to synthesize my technical programming skills in computer programming with my analytical skills that I developed through my data science courses. The result of this synthesis is that I took a simple problem, budgeting time for homework more effectively, and approached it with a novel technique (data modeling) to create something genuinely new. 

### 7. Tracing Coloniality's influence in Computer Science

**College-Wide Learning Goals:**
- Global Responsibility
- Critical Thinking

I worked on this paper for my Science, Power, and Diversity (HON 222) class at Westminster College. In this paper, I explored the influence of coloniality (the power dynamic that exists between countries as a direct result of European colonization of foregin countries) on computer science as a discipline. In particular, I used Sandra Harding's work _Science and Social Inequality: Feminist and Postcolonial Issues_ to argue that coloniality can be found at the roots of computer science because the benefits of developments in computer science are distributed disproportionately to developed countries and the costs of that development, such as electronic waste (the EPA estimates the approximately 50 million tons of electronics are discarded each year), are pinned disproportionately on everyone else. I then used Linda Tuhiwai-Smith's work _Decolonizing Methodologies: Research and Indgienous Peoples_ to argue that this coloniality was allowed to develop in computer science thanks to its inception occurring at the height of World War II and at the intersection of Physics and Engineering.

I chose to include this assignment in my senior portfolio because I feel that this paper was one of the most in-depth reflections I have had on computer science as a discipline. This exercise in critically thinking about computer science from an "outsdier's perspective" really forced me to reflect on the harm that computer science has caused in the global community and how the that harm could grow worse in the years to come if a more responsible perspective on computer science and the never-ending march towards bigger and better is not reconsidered. In line with this reflection, this assignment also helped me to gain a better appreciation for the kind of global responsibility that I have, both as a hopeful computer scientist, as well as a citizen of a developed country that wields a lot of power in the global arena. As a computer scientist, I need to be mindful that the creation of new technologies is not always the most responsible course of action and that instead, it might be more ethically responsible to explore how to take existing technologies and make them more effective and widely available. As a citizen of the United States of America, this paper and the reflection it brought about gave me a better appreciation for the fact that in this country, we enjoy a lot of the benefit that comes from development and rarely are faced with the negative repurcussions of development. As such, we have a responsbility to ensure that the benefit of development is more evenly distributed around the world and that this likely won't happen unless we as a national community push for this change.

<object data="https://drive.google.com/open?id=1IsMcEnpabpRWFoS32SFUsKplT6rrRZKJ" type="application/pdf" width="700px" height="700px">
    <embed src="https://drive.google.com/open?id=1IsMcEnpabpRWFoS32SFUsKplT6rrRZKJ">
        <p>This browser does not support PDFs. Please download the PDF to view it: <a href="https://drive.google.com/open?id=1IsMcEnpabpRWFoS32SFUsKplT6rrRZKJ">Download PDF</a>.</p>
    </embed>
</object>