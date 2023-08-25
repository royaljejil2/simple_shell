#include "shell.h"

/**
 * _strspn - Cal the len of the initial segment of 's1'
 * @s1: string to look in
 * @s2: string containing characters to include
 * Return: the length of s1
 **/
size_t _strspn(const char *s1, const char *s2)
{
	size_t ret = 0;

	while (*s1 && _strchr(s2, *s1++))
		ret++;
	return (ret);
}
