#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PRIVACY_H"
#include <time.h>
int main()
{
	char input[1000];

	printf("----------Please enter AI prompt to mask personal information----------\n");
	printf("(No more than 1000 characters)\n\n");
	printf("Your prompt is:\n");
	fgets(input, sizeof(input),stdin);
	system("sleep .2");
	printf("\nCharacter Count: %d \n\n", (int) strlen(input)-1);

	const int maxMappingSize=10;
	//probably one of the most important vars for this program.
	int iteratorVar=0;

	char item[maxMappingSize][101];
	char token[] = {'#','*','&',
			'?','%','^',
		      	'~','/','<',
			'+','\0'};
	//printf("First print statement\n");

	for(int i=0;i<maxMappingSize;i++)
	{

		system("sleep 1");
		printf("----------Please input items to be masked in the prompt and Press ENTER----------\n");
		printf("                        Input CTRL+x to finish masking\n");
		printf("(Max 100 characters per item)\n");
		if(!iteratorVar)	
		printf("(Maximum of %d items can be masked)\n\n",maxMappingSize);

		
		fgets(item[i],sizeof(item[i]),stdin);
		if(strcmp(item[i],"\x18\n")==0)
		{
			i+=maxMappingSize+1;
		}
		else
		{
			int duplicateFlag=0;
			for(int x=0;x<iteratorVar;x++)
			{
				//printf("Loop %d\n",iteratorVar);
				if((strlen(item[iteratorVar]))>=(strlen(item[x])))
				{
					//printf("strlen(item[Iterator]) is greater\n");
					duplicateFlag = compare(item[iteratorVar],item[x]);
					if(duplicateFlag)
					{
						x+=iteratorVar+1;
						//printf("%s : %s \n",item[iteratorVar],item[x]);
						strcpy(item[iteratorVar],"");
					}
					//printf("duplicate Flag: %d\n", duplicateFlag);
				}
				else 
				{

					//printf("strlen(item[x]) is greater\n");
					duplicateFlag= compare(item[x],item[iteratorVar]);	
					if(duplicateFlag)
					{
						x+=iteratorVar+1;
						//printf("%s : %s \n",item[iteratorVar],item[x]);
						strcpy(item[iteratorVar],"");
					}
					//printf("duplicate Flag: %d\n", duplicateFlag);
				}
				//printf("%s\n",item[iteratorVar]);
				//printf("%s\n",item[x]);

			}
			//printf("Out of loop.\n");
			printf("(%d items remaining)\n",maxMappingSize-1-iteratorVar);
			system("sleep .75");

			if(duplicateFlag)
			{
				printf("This item contains a duplicate of another.\nPlease Try Again. \n");
				i--;
			}
			else
			{
				printf("\nThis item has been masked with the %c characer.\n"
				,token[i]);
				iteratorVar++;
			}
			//printf("IteratorVar: %d",iteratorVar);
			printf("Press Enter to Proceed\n");
			while((getchar())!='\n');
		}
	}
	system("sleep 1");
	printf("\nHere's your alterred prompt!\n");
	
	char* modded=input;
	char* temp=input;

	//printf("past the copying\n");
	for(int i=0;(i<=iteratorVar);i++)
	{
		//printf("%d\n",i);
		//printf("Inside the loop\n");
		//printf("%s\n",item[i]);
		//printf("%c\n",token[i]);
		//printf("past masking a token\n");
		//printf("Item[i]: %c",item[i]);
		modded=maskItem(temp,item[i],token[i]);
		temp=modded;
	}
	//printf("Outside the loop.");
	printf("%s\n",temp);
	FILE *fptr;
	fptr = fopen("Output.txt","w");
	fprintf(fptr,"%s\n",temp);
	fclose(fptr);
	
	/*
	This would be the point where the prompt is made, and sent to A.I
	for processing, and before the restore, it would also accept back
	the solution of A.I in order to restore it.
	*/
		system("sleep 2.5");
		//int status = system("xdg-open https:www.chatgpt.com");
		printf("(From here, The program would send the masked\n");
		printf("of the prompt to AI, in order for it to produce\n");
		printf("a solution, which would then be unmasked.)\n");
		printf("This is to be fully implemented for module 3.\n");


	/*char command[33]= "xdg-open https:";
	strcat(command,"/");
	strcat(command,"/");
	strcat(command,"www.chatgpt.com");
*/

	
	for(int i=0;i<iteratorVar;i++)
	{
		char* restored=restorePrompt(temp,item[i],token[i]);
		temp=restored;
	}
	printf("%s",temp);	
	printf("End Of Program\n");
	return 0;
}
