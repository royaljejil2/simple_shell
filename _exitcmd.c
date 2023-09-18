#include "shell.h"
/**
 * _exitcmd - function closes the simple_shell 
 * @arg: pointer to args.
 * @lineptr: standard input str
 * @x: exitn value
 */
void _exitcmd(char **args, char *lineptr, int x)
{
	int es = 0;

	if (!args[1])
	{
		free(args);
		free(lineptr);
		exit(x);
	}

	es = atoi(args[1]);

	free(args);
    free(lineptr);
	exit(es);
}
