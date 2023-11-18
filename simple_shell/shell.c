#include "shell.h"

/**
 * main - Entry point for the simple shell.
 *
 * Description: Displays a prompt, waits for the user to input a command,
 * and then executes the command. This process continues until the user
 * exits the shell.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	char *line;
	char **args;
	int status;

	do {
		prompt();
		line = read_line();
		args = parse_line(line);
		status = handle_builtin(args);

		if (status)
			status = execute_command(args);

		free(line);
		free(args);
	} while (status);

	return (0);
}
