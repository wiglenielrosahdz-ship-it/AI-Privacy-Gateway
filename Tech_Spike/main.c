#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PRIVACY_H"

int main(void)
{
	char input[100];
	
	printf("Enter A.I prompt for encryption:");
	fgets(input, sizeof(input),stdin);
	//This is the prompt that is meant to be encrypted.
	//There will be a function which encrypts certain key words.

	//might need two different functions, like encodestr() and encodeint()
	//encode("name");
	//encode("Payment method")
	//encode("Transaction number")


	//then it will be sent to the A.I prompt

	//then the A.I prompt will do its work, but be encrypted,

	//we will then have a decode function which will decrypt key words
	//, similar to encode, but backwards.

	//decode("name");
	//decode("payment method");
	//decode("transaction number");

	printf(input);
	return 0;
}
