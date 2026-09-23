Requirements, language choice, architecture, prompt, state, decisions, and M4
paradigm comparison

Goal: Encrypting a prompt for an AI generated transaction confirmation email sent from a company to the client.
      (Specifically, the client's name, the transaction number, and the Payment method of the user)

Non-goals: Partial hiding of information, or hiding too much information i.e non personal information.


Expected Output: The generated Email, with the information decrypted. (information must be encrypted and decrypted)

--------------------------Functional Requirements-------------------------------

FR1: Program must be written in C. C operates faster, and at a lower level than JAVA, meaning that strings and such get operated on much quicker. Scalability, however is much harder than JAVA, and any error in C could have potentially disastrous consequences on the User's device.

FR2: Program must take in user input, which should be the same as the prompt, which would be
      provided to AI.
      
FR3: Program must encrypt name, payment method, and transaction number

FR4: Program must give the encrypted prompt to AI in order for AI to fulfill the prompt.

FR5: Program must receive the AI's solution and be able to decrypt it.

FR6: Program must return encrypted output.

----------------------------Non-functional Requirements---------------------------------

NFR1: Program must be able to encrypt all sensitive information, correctly.

NFR2: Program must return unencrypted output for testing of decryption and encryption functionalities.

NFR3 (optional): Program must send and receive encrypted prompt.


-----------------------------Synthetic Acceptance cases-----------------------------------

Ordinary Input: Transaction number is a number, payment method is a credit card number, and name is a string of letters, first name last name. 

Repeated Intput: The Email contains multiple mentions of any PII, counts as repeated values, meaning they should also be censored.

No sensitive data: If there is no sensitive data, then nothing should be censored at all.

Invalid response: I’m not sure how this would happen, but if I had to guess it would be if there is sensitive data that may not correspond to the actual email, for example, if you put a routing number rather than a credit card number, that would be invalid and declined.

