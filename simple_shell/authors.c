#include "shell.h"

struct Author
{
	char *name;
	char *email;
	char *github;
};

struct Author author =
{
	"Winnie Nota",
	"winnienota1@gmail.com",
	"github.com/WNota"

};

void printAuthor(struct Author author)
{
	printf("Author:\n");
	printf("Name: %s\n", author.name);
	printf("Email: %s\n", author.email);
	printf("Github: %s\n", author.github);
}
