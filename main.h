#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>

#define MAX_SIZE_CMD 256
#define MAX_SIZE_ARG 16
/**
 * get_cmd - Get the cmd object
 */
void get_cmd(void);	/* get command string from the user*/
/**
 * convert_cmd - Tokenize and compare cmd
 */
void convert_cmd(void); /* convert the command string to the required format*/
/**
 * shell - Start the shell
 */
void shell(void);
/**
 * env - Prints the current environment
 * Return: int
 */
int env(void);

/*functions str*/
int _strlen(char *s);
int _strcmp(char *s1, char *s2);

#endif
