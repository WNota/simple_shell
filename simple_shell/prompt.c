#include "shell.h"

/**
 * prompt - Displays the shell prompt.
 *
 * Description: This function prints the shell prompt to standard output,
 * indicating that the shell is ready to accept user input.
 */

void prompt(void)
{
	write(STDOUT_FILENO, "(simple_shell) $ ", 17);
}
