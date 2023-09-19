#include "shell.h"
/**
 * _forkcmd - function that duplicates parent processes
 *@arg: array of command args
 *@av: array of program names
 *@env: array of environment variables
 *@lineptr: ptr to command line string
 *@np: int representing no. of processes
 *@c: int representing a counter
 *Return: 0 if successful
 */

int _forkcmd(char **arg, char **av, char **env, char *lineptr, int np, int c)
{
	int status;
	pid_t childPid;

	char *formatChar = "%s: %d: %s: not found\n";

	childPid = fork();

	if (childPid != 0)
	{
		wait(&status);

		if (WEXITSTATUS(status) != 0 && WIFEXITED(status))
		{
			return (WEXITSTATUS(status));
		}
	}
	else
	{
		if (execve(arg[0], arg, env) == -1)
		{
			fprintf(stderr, formatChar, av[0], np, arg[0]);
			if (!c)
				free(arg[0]);

			free(lineptr);
			free(arg);
			exit(errno);
		}
	}

	return (0);
}
