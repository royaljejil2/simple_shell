#include "shell.h"

/**
 *_strcat - join two strings
 *@dest: destination string where the result is stored
 *@src: source string to be appended to 'dest'
 *Return: pointer to dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int l;
	int j;

	l = 0;
	j = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	while (src[j] != '\0')
	{
		dest[l + j] = src[j];
		j++;
	}

	return (dest);
}
