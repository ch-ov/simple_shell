#include "main.h"
/**
 * env - Prints the current environment
 * Return: int
 */
int env(void)
{
	extern char **environ;
	char **s = environ;

	for (; *s; s++)
	{
		printf("%s\n", *s);
	}

	return (0);
}
