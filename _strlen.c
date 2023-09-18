#include "shell.h"

/**
 * _strlen - calculates the length of a string
 * @s: string to be calculated
 * Return: string length
 */

int _strlen(char *s)
{
	int sl;

	sl = 0;

	while (s[sl] != '\0')
	{
		sl = sl + 1;
	}

	return (sl);
}
