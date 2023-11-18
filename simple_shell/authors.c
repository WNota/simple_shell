#include "shell.h"

/**
 * main - Entry point for the authors information.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	Author author = {
	"Winnie Nota",
	"winnienota1@gmail.com",
	"github.com/WNota"
	};

printAuthor(author);

return (0);

}

/**
 * printAuthor - Prints information about an author.
 * @author: The author to print information about.
 */

void printAuthor(Author author)
{
	printf("Author:\n");
	printf("Name: %s\n", author.name);
	printf("Email: %s\n", author.email);
	printf("Github: %s\n", author.github);
}
