#include "main.h"
int env()
{
	char **s = environ;

	for (; *s; s++)
	{
		printf("%s\n", *s);
	}

	return 0;
}
