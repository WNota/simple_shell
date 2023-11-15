#include "shell.h"

/**
 * getline - function that allocates memory dynamically
 * @char - character to be dispayed
 * Return: 0
 */

ssize_t getline(char **lineptr, size_t *n, FILE *stream)

{
	char *lineptr
	size_t n = 0;

	getline(&lineptr, &n, stdin);
	
	free(lineptr);
	
	return (0);
}
