#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to String.
 * Return: int
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}
