Planned and executed cases, prompt comparison, results, failures, and limitations.

----------------------------------------Test_Spike----------------------------------

Right now this isn't complete, but it can read user input, and output user input.
So, in theory all that we'd need to do is fill the in between with the rest of the program.
From there, we can scale the program up, to what we need.

-------------------------------------Privacy Gateway-------------------------------------

This is not done, but it can read several user inputs:

- It can read the user's AI prompt which the user inputs.
  
- It can read a list of multiple items which the user specifies they want to mask.
  
- It can read a list of multiple tokens which the user can create via the prompt.
  
- It also takes in user input to end the program.

It yields several outputs for the user to read and interpret:

-It returns the users prompt to them, to re-read over. 

-It returns the masked version of the user's prompt. (to verify the masking function worked as intended)

-It returns the restored version of the user's prompt. (to verify the restore function worked as intended)

//////////////Plans/////////////

-This version of the system still does not have A.I attached to it. This is a task best left for module three.
  (Essentially the pipeline is not completely connected, but the individual pipes are established.)
  
//////////Limitations////////////

-Right now the masking is not case sensitive, which works perfectly fine, for masking (imagine not masking something because it's uppercase),
but it becomes a problem when restoring the value, since it is based off of user input. This is not that big of a problem, since the restored
version can still be interpreted as intended, but it does mean, that the restored version is never guaranteed to be a perfect replica of the original.

