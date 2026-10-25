How to run the program, supported formats, warnings, and troubleshooting.

----------------------How to run the Tech_Spike program------------------------------

This is currently in the early phases, but for now we'll run the tech_spike.

I recommend using the linuxMint operating system (since that's how I'm working on this), or using a c compiler.

1. Download the Tech_Spike file, and all of its constituents.

2. Ensure you have the gcc downloaded by typing "sudo apt install gcc"
   
3. Verify that your version of gcc is the most up to date "gcc --version"

4. In the command prompt, type cd AIPG, this will change your directory to AIPG.
   (If you have stored Tech_Spike anywhere else, you will need to copy its entire path, up to AIPG)

5. Then, if you wish to modify the files, (I recommend modifying, not adding to them), simply open them using a text editor of your choice
   (If you're using linuxMint, then it should be "nano [filename]".)

6. In order to run the files, you must use the make file, and type "make run", this will cause the program to run.
 
7. Once it is running you will be prompted for input, where you type your input and then press enter, yielding an output.
   

*★★★Newly Added★★★*

--------------------------------How to run the AIPG Program (AI Privacy Gateway)-----------------------------------------

This is near finished, but does still have some limitations, and still needs the AI aspect to be attached to this program.

For this, I recommend using the linuxmint operating system (since that's how I'm working on it), or using the latest version of a gcc compiler.

1. Download the AIPG file, and all of its contents.

2. Ensure you have the most up-to-date gcc installed, by typing gcc --version and then typing, "sudo apt install gcc" in the terminal.

3. In the terminal, type cd AIPG, changing your directory to the correct "AIPG" directory.
   (If you store it anywhere else, you need to copy the entire path of AIPG.)

4.To modify files, simply open a text editor, or in the linuxmint terminal type nano [filename].

5.To run the program, type "make run" in the linuxmint terminal, causing the program to run.

6. Once it is running you will be prompted for several inputs, in this order:
   
   a. It will ask you for a prompt, which is meant to be modified.
      (Maximum 1000 characters)
   
   b. It will then ask you for values that you wish to mask inside of the prompt.
      (Maximum of 100 characters.)
     (You can also press ctrl+x to end the masking)
   
   c. It will then ask you to input a character which will be a token which will mask the input.
      (Max one character)

   d. It will then loop from step b, until you press ctrl+x to continue on with the program

8. After This process is finished, you will receive, first, the masked version of the original prompt, which was
   typed in, and then you will receive the restored version of the prompt, this is done for testing purposes, and this marks
   the end of the program.

   Note: In step b, I recommend typing your input in a case-sensitive manner. Although, it doesn't affect the masking function,
   it does affect what is returned from the restoring function since the values inputted there, as well as the values in step c, is used for both masking,
   and restoring. (It doesn't make it illegible, it just makes it imperfect.)
