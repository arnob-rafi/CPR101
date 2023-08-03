#define _CRT_SECURE_N0_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

// Version 1

void converting()
{
	printf("*** Start of Converting Strings to int Demo ***\n");

	char intString[BUFFER_SIZE];
	int intNumber;

	do
	{
		printf("Type the int numeric string (q - to quit): \n");
		fgets(intString, BUFFER_SIZE, stdin);

		intString[strlen(intString) - 1] = '\0';

		if (strcmp(intString, "q") != 0)
		{
			intNumber = atoi(intString);
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);

	printf("*** End of Converting Strings to int Demo ***\n\n");
}