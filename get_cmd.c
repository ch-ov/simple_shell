#include "main.h"
void get_cmd()
{
    /* get command from user*/
    printf("shell$\t");
    getline(*cmd, MAX_SIZE_CMD, stdin);
    /* remove trailing newline*/
    if ((_strlen(*cmd) > 0) && (*cmd[_strlen(*cmd) - 1] == '\n'))
        cmd[_strlen(*cmd) - 1] = '\0';
}
