#include "shell.h"

/**
 * handle_builtin - Handles execution of built-in shell commands.
 *
 * Description: This function checks if the given command is a built-in
 * command (e.g., "cd" or "exit") and executes it accordingly.
 *
 * @args: An array of strings containing the command and its arguments.
 *
 * Return: 0 if the command is a built-in that exits the shell, 1 otherwise.
 */

int handle_builtin(char **args)
{
	if (args == NULL || args[0] == NULL)
	{
		return (1);
	}

	if (strcmp(args[0], "exit") == 0)
	{
		return (0);
	}
	else if (strcmp(args[0], "cd") == 0)
	{

		if (args[1] == NULL)
		{
			fprintf(stderr, "shell: cd: missing argument\n");
		}
		else
		{
			if (chdir(args[1]) != 0)
			{
				perror("shell");
			}
		}
		return (1);
	}

	return (1);
}
