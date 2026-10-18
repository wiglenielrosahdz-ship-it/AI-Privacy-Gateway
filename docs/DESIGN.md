Requirements, language choice, architecture, prompt, state, decisions, and M4
paradigm comparison

Goal: Masking a prompt for an AI generated transaction confirmation email sent from a company to the client.
      (Specifically, the client's name, the transaction number, and the Payment method of the user)

Non-goals: Partial hiding of information, or hiding too much information i.e non personal information.


Expected Output: The generated Email, with the information decrypted. (information must be encrypted and decrypted)

--------------------------Functional Requirements-------------------------------

FR1: Program must be written in C. C operates at a lower level than JAVA, meaning that the storage, allocation, and access of memory, is more  and can serve the program more adequately than JAVA. The aspects of memory manipulation in C, particularly pointers, could also serve as a method to mask Personal information. Scalability, however is much harder than JAVA, and any error in C could have potentially disastrous consequences on the User's device if memory is manipulated with incorrectly.

FR2: Program must take in user input, which should be the same as the prompt, which would be
      provided to AI.
      
FR3: Program must Mask name, payment method, and transaction number

FR4: Program must receive the AI's solution and be able to Restore it.

FR5: Program must Restore Masked output.

----------------------------Non-functional Requirements---------------------------------

NFR1: Program must be able to Mask all sensitive information, correctly, not excessively.

NFR2: Program must return unmasked output for testing of restoration and masking functionalities.

NFR3 (optional): Program must send and receive masked prompt to AI.


-----------------------------Synthetic Acceptance cases-----------------------------------

Ordinary Input: Transaction number is a number, payment method is a number, and name is a string of letters, first name last name or last name, first name. 

Repeated Intput: The email contains multiple mentions of any PII, counts as repeated values, meaning they should also be masked.

No sensitive data: If there is no sensitive data, then nothing should be censored at all.

Invalid response: If what is inputted is not text based (it's only a number) or can't be utilized as a valid string.
      (I'm not entirely sure what to do here)

