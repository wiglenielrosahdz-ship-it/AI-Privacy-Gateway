This is meant to be an AI Privacy gateway, to gate AI from receiving sensitive information. Mainly, for payment confirmation Emails which can come in any format, but I have chosen this sort of format

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
