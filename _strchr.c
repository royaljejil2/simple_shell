#include "shell.h"

/**
 * _strchr - locates the ﬁrst occurrence of char in the string
 * @s: string to search
 * @c: character to look for 
 * Return: pointer to char
 **/
char *_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
