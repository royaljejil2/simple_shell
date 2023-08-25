#include "shell.h"

/**
 *_strncmp -  compare first 'n' characters of two strings
 *@s1: first string 
 *@s2: second string
 *@n: max number of characters to compare
 * Return: positive if s1 < s2
 */

size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t i = 0;
	size_t j = 0;

	for (j = 0; j < n && s1[j] != '\0'; j++)
	{
		i = s1[j] - s2[j];

		if (i != 0)
		{
			return (i);
		}
	}
	
	return (0);
}
