#include "main.h"
int _env()
{
	char **s = environ;

	for (; *s; s++)
	{
		printf("%s\n", *s);
	}

	return 0;
}