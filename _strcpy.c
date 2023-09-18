#include "shell.h"

/**
 * _strcpy - Copy a string from source to destination
 * @dest: destination where src will be copied
 * @src: source string to copy
 * Return: ptr to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
