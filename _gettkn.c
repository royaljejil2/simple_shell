#include "shell.h"
/**
 * _gettkn - Tokenize inputed string into an array of tokens
 * @lineptr: input string to be tokenized
 * Return: a pointer to the array of tokens
 */

char **_gettkn(char *lineptr)
{
	char *token = NULL;
	char **usercmd = NULL;
	int length = 0;
	size_t index = 0;

	if (lineptr == NULL)
		return (NULL);

	for (index = 0; lineptr[index]; index++)
	{
		if (lineptr[index] == ' ')
		{
			length++;
		}
	}

	if ((length + 1) == _strlen(lineptr))
	{
		return (NULL);
	}

	usercmd = malloc(sizeof(char *) * (length + 2));
	if (!usercmd)
	{
		return (NULL);
	}

	token = _strtok(lineptr, " \n\t\r");

	for (index = 0; token != NULL; index++)
	{
		usercmd[index] = token;
		token = _strtok(NULL, " \n\t\r");
	}

	usercmd[index] = NULL;

	return (usercmd);
}
