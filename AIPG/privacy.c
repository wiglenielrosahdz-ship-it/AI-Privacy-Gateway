#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char* maskItem(char* text , char* num, char Mask)
{
//printf("Inside MaskItem function\n");
	char numMask= Mask;
	char* tText=text;
	for(int i=0;i<strlen(tText)||text[i]=='\0';i++)
	{
		int Equality=0;
		//printf("Inside outer loop.\n");
		//printf("%d",i);
		for(int x=0;x<strlen(num)-1;x++)
		{
			int tTextCharASCII=tolower(tText[i+x]);
			int numCharASCII=tolower(num[x]);
			//printf("Inside Determining loop\n");
			if(tTextCharASCII==numCharASCII)
			{
				Equality=1;
			}
			else
			{
				Equality=0;
				x+=strlen(num);
			}
		}
		if(Equality)
		{
			for(int x=0;x<strlen(num)-1;x++)
			{
				//printf("Inside Equality loop\n");
				//printf("%d\n",i);
				//printf("%d\n",x);
				//printf("%s\n",tText);

				tText[i+x]= numMask;
			}
			i+=strlen(num)-1;
			Equality=0;
		}
		else
		{
			tText[i]=text[i];

			//printf("Outside Else statement");
			//printf("%s",tText);
		}
	}

	//can't forget this.
	tText[strlen(tText)+1]='\0';
	//printf("Outside outer loop.\n");
	//printf("End of whole Function.\n");
	//printf("%s\n",tText);
	return tText;
}


char* restorePrompt(char* text,char* num,char token)
{
	char* result= text;
	//printf("Very Beginning.\n");
	
	for(int i=0;i<strlen(result)||text[i]=='\0';i++)
	{
		if(result[i]==token)
		{
			for(int x=0;x<strlen(num)-1;x++)
			{
				result[i+x]=num[x];
			}
			i+=strlen(num)-1;
		}
	}
	//printf("%s\n",result);
	//printf("End of func");
	result[strlen(result)]='\0';
	return result;
}
