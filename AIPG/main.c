#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PRIVACY_H"
int main()
{
	char input[1000];

	printf("Please enter AI prompt to mask personal information:\n");
	printf("(No more than 1000 characters)\n");
	fgets(input, sizeof(input),stdin);
	printf("%s\n",input);
	printf("Character Count: %d \n", (int) strlen(input));
	
//	map<char*, char> MaskMap;
	int maxMappingSize=10;
	
	char item[maxMappingSize][101];
	char token[maxMappingSize];

	for(int i=0;i<maxMappingSize;i++)
	{
		printf("Please input what must be masked in the prompt.\n");
		printf("Input ctrl+x to finish masking\n");
		printf("(Max 100 characters)\n");
		
		fgets(item[i],sizeof(item[i]),stdin);
		if(strcmp(item[i],"\x18\n")==0)
		{
			token[i]='\0';
			i+=maxMappingSize+1;
		}
		else
		{
		printf("\nPlease input a token which serves as a mask. (1 character)\n");

		token[i]=getchar();

		while((getchar())!='\n');
		}
	}

	printf("Here's your alterred prompt!\n");
	
	char* modded=input;
	char* temp=input;

	for(int i=0;strcmp(item[i],"\x18\n")!=0;i++)
	{
		modded=maskItem(temp,item[i],token[i]);
		temp=modded;
	}
	printf("%s\n",temp);

	/*
	This would be the point where the prompt is made, and sent to A.I
	for processing, and before the restore, it would also accept back
	the solution of A.I in order to restore it.
	*/
		printf("(From here, The program would send the masked\n");
		printf("of the prompt to AI, in order for it to produce\n");
		printf("a solution, which would then be unmasked.)\n");
		printf("This is to be fully implemented for module 3.\n");

	for(int i=0;i<=strlen(token);i++)
	{
		char* restored=restorePrompt(temp,item[i],token[i]);
		temp=restored;
	}
	printf("\nHere's Your restored Prompt: %s\n",temp);
	printf("E.O.P");
	return 0;
}
