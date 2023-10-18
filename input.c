#include "shell.h"

/**
 * read_command - function that reads the command before prompt is displayed
 * @char - character
 * Return: NULL
 *
 */


char *read_command()

{
	char *line = NULL;
	size_t len = 0;

	if (getline(&line, &len, stdin) == -1)
	{
		free(line);

		return (NULL);
	}
