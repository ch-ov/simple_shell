#include "main.h"
/**
 * shell - Start the shell
 */
void shell(void)
{
	char cmd[MAX_SIZE_CMD];
	char *argv[MAX_SIZE_ARG];
	pid_t pid;
	int i = 0;

	while (1)
	{
		get_cmd(); /* get the command from user*/

		if (!_strcmp("", cmd)) /* bypass empty commands*/
			continue;

		if (!_strcmp("exit", cmd)) /* check for "exit" command*/
			break;

		convert_cmd(); /* fit the command into *argv[]*/

		pid = fork(); /* fork and execute the command*/
		if (pid == -1)
		{
			printf("failed to create a child\n");
		}
		else if (pid == 0)
		{
			execvp(argv[0], argv); /* execute a command*/
		}
		else
		{
			if (argv[i] == NULL) /* wait for command finish if & not present*/
				waitpid(pid, NULL, 0);
		}
	}
}
