#include "shell.h"

/**
 * read_line - Reads a line from standard input.
 *
 * Description: Reads a line from standard input and dynamically allocates
 * memory to store the input. The newline character is replaced with a null
 * terminator.
 *
 * Return: A pointer to the allocated string containing the input line.
 *         Returns NULL on failure or if the end of file is reached.
 */

char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	nread = getline(&line, &len, stdin);

	if (nread == -1)
	{
		free(line);
		return (NULL);
	}

	if (line[nread - 1] == '\n')
	{
		line[nread - 1] = '\0';
	}
return (line);
}

/**
 * parse_line - Parses a line into individual tokens.
 *
 * Description: Splits a line into individual tokens using whitespace
 * characters as delimiters. Dynamically allocates memory to store the
 * tokens.
 *
 * @line: The input line to be parsed.
 *
 * Return: An array of pointers to the individual tokens.
 *         Returns NULL on failure or if no tokens are found.
 */

char **parse_line(char *line)
{
	const char *delimiters = " \t\r\n\a";
	char **tokens = malloc(BUFFER_SIZE * sizeof(char *));
	char *token;
	int i = 0;

	if (!tokens)
	{
		perror("malloc error");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, delimiters);
	while (token != NULL)
	{
		tokens[i++] = token;
		token = strtok(NULL, delimiters);
	}

	tokens[i] = NULL;
	return (tokens);
}
