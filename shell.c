#include "shell.h"

/** main - main function to print prompt
 * @char: the character to print
 * @...: variable arguments
 * @size_t: stores allocated size in bytes
 * Return: 0 Success
 */

int main(int ac, char **argv)

{
	char *prompt = "(shell) $ ";

	(void)ac; (void)argv; /*void varialbes declaration*/

	printf("%s\n" , prompt);

	return (0);
}
