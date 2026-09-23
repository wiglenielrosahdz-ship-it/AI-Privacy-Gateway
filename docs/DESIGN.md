Requirements, language choice, architecture, prompt, state, decisions, and M4
paradigm comparison

--------------------------Functional Requirements-------------------------------

FR1: Program must be written in C.

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
