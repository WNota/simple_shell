#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int ac, char **argv);
size_t getline(char **lineptr, size_t *n, FILE *stream);
getline(&lineptr , &n, stdin);

#endif
