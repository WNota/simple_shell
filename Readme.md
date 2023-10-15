# Simple Shell project

## Introduction

This is a simple shell project that demostrate the basic functionalities of unix-like command line shell. This file will give an overview of the project and describe the files created for this project. The primary goal of this project is to implement simple shell that can execute a variety of unix commands, including builtin commands like exit and cd.


## Steps to Implement

1. **Basic shell loop** - Creates basic shell loop that continuosly propmtd the user input, and also parse user input and execute the entered command.

2. **Command Execution** - Implement a mechanism to execute external command usinf 'fork()' and 'execv()' system calls. Handles foreground and background processes.

3. **Input/ Output Redirection** - implement input and output redirection using '<', '>', and '>>'. redirecting standard input and output to/ from files.

4. **Piping** - Implement command piping using the 'I' operator. Create a mechanism to pipe the output of one command into the input of another.

5. **Signal handling** - Handles signals and implement signal handlers to provide user friendly termination and suspension of processes.

6. **Builtin Commands** - creates builtin command such as cd for changing directories and exit. ensuring that shell can execute these comands without forking a new process.

7. **Compilation** - for project compiling the following code will be used: "gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh"*

8. **Testing** - creates set of test cases to verify that the shell commands behave correctly and produces the expected output.

##Project files

1. **simple-shell.c** - Contains the implementations of the shell's core logics. This is the main source code file for this project.
2. **input.c** - contains files related to parsing user input. it recognizes commands, arguments, special operators and handles input/output redirections.
3. **execute.c** - contains code for executing external commands, handling built-in commands and managing foregriund and background processes.
4. **pipe.c** handles piping commands.
5. **signals.c** - deals with signal handling, allowing the shell to respond to Ctrl-C and Ctrl-Z signals appropriately.
6. **builtins.c** - contains the implementation of builtin commands.
7. **shell.h** - the header file for the project. includes function prototypes, constants and data structures used across different source code files.

## AUTHOR

Winnie Nota 




