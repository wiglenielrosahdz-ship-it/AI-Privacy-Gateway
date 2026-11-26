This is meant to be an AI Privacy gateway, to gate AI from receiving sensitive information. Mainly, for payment confirmation Emails which can come in any format, but I have chosen this sort of format as a start:

Draft an email about transaction 35, to John doe, with payment method 1234567890.

name, transaction number, payment method, are the sensitive information that exists in this format. However, this is not all personal information which could be included in such an Email, meaning that there is a need for upscale, but for now this is a start.

User: individuals or companies which handle transactions, or utilize A.I to confirm transactions, these companies are also in charge of ensuring that their consumer information isn’t leaked.

Planned Data flow: Numbered in steps:

    User Input: This is the user’s input, which is local to their machine.
    Privacy gateway: This is the program which will encode the prompt and prepare it for it to be sent to A.I, this is also local to the machine, but can be expanded to include a data transfer.
    A.I prompt: This is when we place the prompt into the A.I to draw an output. This is a data transfer from your local machine, to the A.I
    Privacy Gateway: local: Once we get an output, we use the privacy gateway to decode information, except maybe the payment method, contained within an email. Local to the machine
    Output: local: This is the translated version of the output which will be given back to the original user.

Language used to code this program. The language used for these files and this program is C.


The Tech_Spike folder is a brief Idea, of what I'm going to be making through the whole year. 
It's brief, but the expectation is that it will need to be expanded into the full project later in the year.
It can serve as a temporary idea of how to get started.

///Added October 24th///

The AIPG folder is the real deal of the project, It is not finished, but the main pipes (masking and restoring) 
of the entire pipeline, are close to done (not perfect, but functional).
It serves as the foundation for this entire project and leaves only one main key part, which is inputting and
receiving the solution from AI.

Essentially:
steps 1,2,4,5 of the data flow are done, or near done, it's just step 3, and the connections to 3 that need to be finished.

-------------Newly Added--------------///Added November 25th///

The AIPG folder has been refined to fix many of the different bugs I discovered or came up with, as well as has now implemented duplicate management.
The program now handles duplicates in a graceful manner that essentially declines duplicates and permits you to re-enter input.
I had found tons of bugs, and have fixed, hopefully all of them.

You are allowed up to 10 inputs, this number can be increased, but I do not recommend, since I believe the program has a
time complexity of O(n^4) due to the newly implemented method of finding duplicates. You can have up to 100 inputs before it 
becomes any sort of issue with time, and I don't imagine that it will be.

Future Plans:
Steps 1,2, and 5 are completely finished, it is now a matter of integrating AI prompts into 3 and  4, which I should hopefully have done before the end of this weekend. The main problem is that I'm not sure if there's a package in C for dealing with ChatGPT, but we'll see. Thas led to me having the idea of using a second programming language, like JavaScript (JSON files) to send information to chatGPT, but we'll see. 

You may see there's an Output.txt file in AIPG now, this may be part of the future in regards to sending information to ChatGPT, but we'll see.
