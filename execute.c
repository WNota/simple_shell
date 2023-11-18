#include "shell.h"

/**
 * execute_command - Executes an external command.
 *
 * Description: Forks a new process to execute the given external command.
 * Handles both the parent and child processes, waits for the child to
 * complete, and returns the status.
 *
 * @args: An array of strings containing the command and its arguments.
 *
 * Return: 1 if the command executed successfully, 0 otherwise.
 */

int execute_command(char **args)
{
	pid_t pid;
	int status;


	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("shell");
		}
	exit(EXIT_FAILURE);
	}
else if (pid < 0)
{
	perror("shell");
	return (1);

}
else
{
	do {
		pid = waitpid(pid, &status, WUNTRACED);
	} while (!WIFEXITED(status) && !WIFSIGNALED(status));

return (1);
}
}
