#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void display_propmpt();
char *read_command();
void execute_command(char *command);

#endif
