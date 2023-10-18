#include "shell.h"

/**
 * execute_command - function that execute the command 
 * @char - character
 */

void execute_command(char *command)
{
	char *cleaned_command = strtok(command, "\n");

	if (!cleaned_command || strlen(cleaned_command) == 0)
	{
		return;
	}

	if (access(cleaned_command, X_OK) == 0)
	{
		pid_t pid = fork();

		if (pid == -1)
		{
			perror("fork");
		}
		else if (pid == 0)
		{
			char *args[] = {cleaned_command, NULL};
			execve(cleaned_command, args, NULL);
			perror(cleaned_command);
			_exit(2);

		}
		else
		{
			int status;
			wait(&status);
		}
		}
		else
		{
			fprintf(stderr, "command not found: %s\n", cleaned_command)
		}
}
