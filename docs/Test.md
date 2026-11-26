This file contains values to test for specific Input chains, and or bugs and will be 
split between two different types of issues (Non-A.I test values and A.I test values)

These will then be subdivided into further sections based on the kind of bug and or issue to be tested.
(as well as a expected | actual output).

Key: EXP: This is the expected value of a test case.
    ACT: This is the actual value of a test case if it doesn't match the EXP.
    *** This is expected value is the actual value of the program, thus making it correct.
    
-----------------------------------Non-A.I test values---------------------------------

/////////Bounds Tests////////

Test 1:
  Prompt:
    877-241-LUNA

  Item 1:
    (Press Enter)
  Item 2:
    CTRL+X

  EXP | ***
  Masked Prompt:
    877-241-LUNA
  EXP | ***
  Restored Prompt:
    877-241-LUNA
    
Test 2:
  Prompt:
    877-241-LUNA

  Item 1:
    (Press Enter)
  Item 2:
    (Press Enter)
  Item 3:
    (Press Enter)
  Item 4:
    (Press Enter)
  Item 5:
    (Press Enter)
  Item 6:
    (Press Enter)
  Item 7:
    (Press Enter)
  Item 8:
    (Press Enter)
  Item 9:
    (Press Enter)
  Item 10:
    (Press Enter)
  
  EXP | ***
  Masked Prompt:

  EXP | ***
  Restored Prompt:

Test 3:
  Prompt:
    (Something more than 1000 characters.)

  EXP Output:
  Too many characters, please try again.
  (forces you to retype the prompt)
  then continues with the rest of the program.
  
  ACT Output:
  
////////Duplicates testing//////////

Test 4 (contains duplicates):

Prompt:
  877-241-LUNA

Item 1:
  877
Item 2:
  77 
  EXP | ***
  Output:
  This item has a duplicate of another, please try again.
  
Item 2 (again):
  877-241
  EXP | ***
  Output:
  This Item has a duplicate of another please try again.

Item 2 (again):
  CTRL+X

  EXP | ***
  Masked Prompt:
    ###-241-LUNA

  EXP | ***
  Restored Prompt:
    877-241-LUNA

Test 5:

Prompt: 
  877-241-LUNA

Item 1: 
  877

Item 2:
  877
  EXP | ***
  Output:
    This item contains a duplicate of another, please try again.

Item 2 (again):
  CTRL+X

  EXP | ***
  Masked Prompt:
    ###-241-LUNA

  EXP | ***
  Restored Prompt:
    877-241-LUNA

-------------------------------------A.I testing Values--------------------------------------
    
