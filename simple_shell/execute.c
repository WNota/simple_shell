#include "shell.h"

/**
 * execute_command - function that execute the command 
 * @char - character
 * @args: variable arguments list
 */

void execute_command(char *command)
{
	char command;

	while (1)
	{
		printf("%s\n", prompt);

		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			perror(EXIT_FAILURE);
		}

		if (command[0] == '\n')
		{
			printf("Exiting.\n");
			break;
		}

		return (0);
	}
}
