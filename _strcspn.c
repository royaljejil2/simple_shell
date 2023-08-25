#include "shell.h"

/**
 * _strcspn - Calculate the len of the initial segment of 's1'
 * @s1: string to look within
 * @s2: string containing characters to avoid
 * Return: len of the segment 's1'.
 **/
size_t _strcspn(const char *s1, const char *s2)
{
	size_t ret = 0;

	while (*s1)
	{
		if (_strchr(s2, *s1))
			return (ret);
		s1++, ret++;
	}
	return (ret);
}
