#include "shell.h"

/**
 * getline - function that allocates memory dynamically
 * @char - character to be dispayed
 * Return: 0
 */

ssize_t getline(char **lineptr, size_t *n, FILE *stream)

{
	ssize_t read;

	if (*lineptr == NULL)
	{
		*lineptr = (char *)malloc(*n);
		if (*lineptr == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
	}
	
	read = getline(lineptr, n, stream);
	
	return (read);
}
