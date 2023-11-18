#include "shell.h"

/**
 * handle_signal - Handles signals for the shell.
 *
 * Description: This function defines the behavior of the shell when
 * receiving specific signals, such as SIGINT (Ctrl-C).
 *
 * @signo: The signal number.
 */

void handle_signal(int signo)
{
	if (signo == SIGINT)
	{
		write(STDOUT_FILENO, "\n", 1);
		prompt();
	}
}

/**
 * setup_signals - Sets up signal handlers for the shell.
 *
 * Description: This function initializes signal handlers for the shell,
 * allowing it to respond appropriately to signals such as Ctrl-C.
 */

void setup_signals(void)
{
	signal(SIGINT, handle_signal);
}
