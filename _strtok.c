#include "shell.h"

/**
 * _strtok - split a string into tokens using a delimiter
 * @str: string to tokenize on 1st call
 * @delim: separator
 * Return: ptr to the next token found in 'str'
 **/
char *_strtok(char *str, const char *delim)
{
	static char *p;

	if (str)
		p = str;
	else if (!p)
		return (0);
	str = p + _strspn(p, delim);
	p = str + _strcspn(str, delim);
	if (p == str)
		return (p = 0);
	p = *p ? *p = 0, p + 1 : 0;
	return (str);
}
