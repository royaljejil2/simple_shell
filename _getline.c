#include "shell.h"
/**
 * _getlinecmd - Read a line of text from the standard input
 * Return: a ptr to the allocated string
 */

char *_getlinecmd(void)
{
	size_t charterusr = 0;
	char *lineptr = NULL;

	if (isatty(STDIN_FILENO)) {
		write(STDOUT_FILENO, "$ ", 2);
	}

	if (getline(&lineptr, &charterusr, stdin) < 0)
	{
		free(lineptr);
		return (NULL);
	}

	return (lineptr);
}
