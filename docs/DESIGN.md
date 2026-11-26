Requirements, language choice, architecture, prompt, state, decisions, and M4
paradigm comparison

*★★★Newly re-verified and modified★★★*

Goal: Masking a prompt for a transaction Email containing Important or Personally Identifiable Information (IPII as I will refer to it from now on) that the sender may want to mask from AI,
(For example, a Client's name, the Transaction's number, and the Payment method of the Client.)

Non-goals: Partial hiding of User's IPII, or over-masking of non IPII values contained within the prompt, that the user may not want masked.

Expected Output: The generated Email, with the IPII restored. (information must be masked and restored)

--------------------------Functional Requirements-------------------------------

FR1: Program must be written in C. The speed of C's direct compilation works better than JAVA's JVM for a program such as this one, since it is a smaller program, although that speed difference may be negligible. Also the more direct interactivity between C and the Operating system has the potential to make AI integration more efficient through piping, and/or running child processes, but this is a theory, not a certainty. Scalability, and portability, however is much harder in C than JAVA, and any error in C could have potentially disastrous consequences on the User's device if memory is manipulated with incorrectly, not to mention certain methods in C only work for windows and others only for Linux, which sucks when it comes to finding which to use. 

FR2: Program must take in user input:
      -The prompt, this will be provided to AI, but not before...
      -The items the user wants to mask.
      (This has been implemented as a simple input, not yet provided to AI.)
      
FR3: Program must Mask name, payment method, and transaction number
      (This has been semi-implemented, all of these can be masked, but the user has to deliberately specify what to mask.)
      
FR4: Program must receive the AI's solution and be able to Restore it.
      (The restoring is done, but it is not the AIs solution that's restored, right now it's just the prompt that was masked.)
      
      
----------------------------Non-functional Requirements---------------------------------

NFR1: Program must be able to Mask all sensitive information, correctly, not excessively.
      (This is going to need to be done, almost on a case by case basis, or there needs to be formatting involve because other wise
      word , word can be treated as a name, or word word can be treated as a name.)
      
NFR2: Program must return unmasked output for testing of restoration and masking functionalities.

NFR3 (optional): Program must send and receive masked prompt to AI.


-----------------------------Synthetic Acceptance cases-----------------------------------

Ordinary Input: User inputs their prompt (an Email), which contains information to be masked, they specify what must be masked 

Repeated Intput: The email contains multiple mentions of any IPII, or item. These count as repeated values, meaning they should also be masked.

Duplicated Input: user inputs multiple instances of one Item to be masked, and or similar items.
(for example, the user tells the program to masked 877 and then tells it to mask 877, or 87, 87 is contained within 877 and thus it should be treated as a duplicated input.)

No sensitive data: If there is no sensitive data, then nothing should be censored at all.

Invalid response: If what is needed to be masked does not exist within the prompt provided. (This could break the program.)

