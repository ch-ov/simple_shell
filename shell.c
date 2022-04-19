#include "main.h"
void shell()
{
	while (1)
	{
		/* get the command from user*/
		get_cmd();

		/* bypass empty commands*/
		if (!strcmp("", *cmd))
			continue;

		/* check for "exit" command*/
		if (!strcmp("exit", *cmd))
			break;

		/* fit the command into *argv[]*/
		convert_cmd();

		/* fork and execute the command*/
		pid = fork();
		if (-1 == pid)
		{
			printf("failed to create a child\n");
		}
		else if (0 == pid)
		{
			/* printf("hello from child\n");*/
			/* execute a command*/
			execvp(argv[0], argv);
		}
		else
		{
			/* printf("hello from parent\n");*/
			/* wait for the command to finish if "&" is not present*/
			if (NULL == argv[i])
				waitpid(pid, NULL, 0);
		}
	}
}