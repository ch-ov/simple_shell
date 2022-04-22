#include "main.h"
/**
 * get_cmd - Get the cmd object
 */
void get_cmd(void)
{
	char *cmd = NULL;
	size_t size;  /*string holder for the command*/

	printf("shell$\t");
	getline(&cmd, &size, stdin); /* get command from user*/

	if ((_strlen(cmd) > 0) && (cmd[_strlen(cmd) - 1] == '\n')) /* remove \n*/
		cmd[_strlen(cmd) - 1] = '\0';
}
