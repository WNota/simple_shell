#include "shell.h"

/**
 * main - Function that diplays prompt in shell program
 * Return: error (if not execuatable) / display prompt (if executable)
 *
 */

int main(void)
{
	char *command;

	while(1)

	{
		display_prompt();
		command = read_command();

		if (!command)
			break;

		execute_command(command);
		free(command);
	}

	return (0);
}
