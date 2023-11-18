#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

#define BUFFER_SIZE 1024

void prompt(void);
char *read_line(void);
char **parse_line(char *line);
int execute_command(char **args);
int main(void);
typedef struct Author
{
        char *name;
        char *email;
        char *github;
} Author;
void printAuthor(Author author);

#endif
