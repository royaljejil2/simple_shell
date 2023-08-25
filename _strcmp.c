#include "shell.h"

/**
 * _strcmp - compare two strings
 * @s1: first str
 * @s2: second str
 * Return: 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
