#include "main.h"
/**
 * convert_cmd - Tokenize and compare cmd
 */
void convert_cmd(void)
{
	char cmd[MAX_SIZE_CMD];
	char *argv[MAX_SIZE_ARG];
	/* split string into argv*/
	char *ptr;
	int i = 0;

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
}
