// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"


//* Version 1 */
void fundamentals(void) 
{   
	printf("*** Start of Indexing Strings Demo ***\n");

	char bufferl[BUFFER_SIZE];
	char numInput[NUM_INPUT_SIZE];
	size_t position;

	do 
	{
		printf("Type not empty string (q - to quit):\n");
		fgets(bufferl, BUFFER_SIZE, stdin);         
		
		bufferl[strlen(bufferl) - 1] = '\0';
		
		if (strcmp(bufferl, "q") != 0) 
		{          
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);
				
			numInput[strlen(numInput) - 1] = '\0';
			position = atoi(numInput);
			
			if (position >= strlen(bufferl)) 
			{
				position = strlen(bufferl) - 1;
				printf("Too big... Position reduced to max. available\n");
			}
			printf("The character found at %d position is \'%c\'\n", (int)position, bufferl[position]);
		}
	} while (strcmp(bufferl, "q") != 0);
		printf("*** End of Indexing Strings Demo ***\n\n");
}


/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


