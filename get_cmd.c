#include "main.h"
/**
 * get_cmd - Get the cmd object
 */
void get_cmd(void)
{
	char *cmd[MAX_SIZE_CMD];  /*string holder for the command*/

	printf("shell$\t");
	getline(*cmd, MAX_SIZE_CMD, stdin); /* get command from user*/

	if ((_strlen(*cmd) > 0) && (*cmd[_strlen(*cmd) - 1] == '\n')) /* remove \n*/
		cmd[_strlen(*cmd) - 1] = '\0';
}
