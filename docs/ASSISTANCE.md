Important AI, peer, library, or source help and how you verified it

-----------------------------------AI help in design choices------------------------------------------------------

1. Is c coding better at memory manipulation than JAVA, and if so, why?
   
Prompt: Is C coding better at memory manipulation than JAVA, and if so, why?

It responded by stating that C has variables like pointers, which allow for actual memory addresses to be stored,
and for the things stored at those addresses t be manipulated.
You can dynamically allocate memory manually, rather than automatically as in JAVA
and because it gives you more control over how data is laid out.


However, most threads that I read, C is better at memory manipulation, but JAVA is better at management, since
JAVA uses the JVM garbage collector as part of its management, while Cs management depends on the User.
The User-based memory management of C means that the user has more direct access to manipulating memory, while
the JAVA automated approach makes it easier to manage memory, since it is automated, but harder to manipulate specific parts of memory,
without the use of references.

Sources:
https://simpleprogrammer.com/c-vs-java-10-key-differences/
https://www.quora.com/How-does-Java-handle-memory-management-better-than-C-and-why-is-this-a-big-deal-for-developers
https://stackoverflow.com/questions/3910625/which-language-has-better-memory-management-among-c-c-java

Note: I understand that a lot of these are blogs, however, these are the main results that I obtained while searching up this problem.
(Everything else was JAVA vs C++)


2. How should I implement a map in c?
   (This is not a specific prompt, but a more generalized goal of several questions I asked to A.I)

   It recommended that I use 2d arrays, which I did (kind of). I pressed on further and wanted to see if it was possible to make the
   2d arrays dynamically allocated, which is possible, but I found the implementation, and more importantly the modification of the arrays
   to be much more complex than time allowed, and so I settled for one static 2d array, and a 1d array, for the items that were being masked,
   and the tokens, respectively. This works well with the current schematic of the program and can still be up-scaled using dynamically allocated 2d arrays later.
   There were also several websites which had certain implementations of map, such as a map struct, but it wasn't exactly necessary with the two arrays.
////////////////////newly Added/////////////

3. How would I send input to chatGPT using a C program or Azure.
   I asked it, and it straight up gave me the answer, which is not what I was looking for (I like the challenge and the learning of it all), so I searched around further, and found that there really isn't a way aside from manually making HTTPS calls. From my understanding I need to use the libcurl package in C in order to make HTTPS requests to send to ChatGPT or Azure, so that they can be processed. I need to figure out how to receive them, however, which is just as tough of a question, maybe getting them to send it back to my program as HTTPS packets, but how would I do that? Maybe Piping can help in this situation 
    
-------------------------------------------------Peer Assistance---------------------------------------------------------------

1. During this module, I actually sat down and collaborated with Briana, on working with the masking, and with conceptualizing the mechanism
   that was behind the masking of a given Item. This is sort of where I started thinking of a philosophy, covered in one of my classes.
   (Systems and Network programming.) I was thinking of the masking function as a "Do one thing, and do it well" function, where it didn't need to
   mask everything that it saw, just one specific thing every time it saw it. And that's now how the masking function is designed, and I applied this idea
   to the restorePrompt function as well.
   Aside from this brain storm with her, She also helped in verifying my code, and sort of the foundation of it, which helped throughout the development process.

//////////////Newly Added////////////////
2. I also texted Briana during this module, but I briefly asked for her insight on how she did her AI integration since she had done it already. She explained that she used a Java package which allowed her to manipulate the website elements, so that all she needed to do was finding the web element. Maybe I can do something similar in C, though I doubt it since most websites are not made with C, I believe.
