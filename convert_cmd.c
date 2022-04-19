#include "main.h"
void convert_cmd()
{
	/* split string into argv*/
	char *ptr;
	i = 0;
	ptr = strtok(*cmd, " ");
	while (ptr != NULL)
	{
		/* printf("%s\n", ptr);*/
		argv[i] = ptr;
		i++;
		ptr = strtok(NULL, " ");
	}

	/* check for "&"*/
	if (!_strcmp("&", argv[i - 1]))
	{
		argv[i - 1] = NULL;
		argv[i] = "&";
	}
	else
	{
		argv[i] = NULL;
	}
	/* printf("%d\n", i);*/
}
