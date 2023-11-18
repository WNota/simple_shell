#include "shell.h"

/**
 * main - Entry point.
 *
 * Description: Displays a prompt, waits for the user to input a command,
 * and then executes the command. This process continues until the user
 * exits the shell.
 *
 * Return: Always returns 0.
 *
 */

int handle_builtin(char **args);

int main(void)
{
	char *line;
	char **args;
	int status;

	do {
		prompt();
		line = read_line();
		args = parse_line(line);

		if (args != NULL && args[0] != NULL)
		{

			status = execute_command(args);
		}
		else
		{
			status = 1;
		}

		free(line);
		free(args);

	} while (status);

	return (0);
}
