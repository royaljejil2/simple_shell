#include "shell.h"

/**
 *_getenv - Retrieve and print environment variables.
 *@env: An array of environment variables
 */

void _getenv(char **env)
{
	size_t runit = 0;

	while (env[runit])
	{
		write(STDOUT_FILENO, env[runit], _strlen(env[runit]));

		write(STDOUT_FILENO, "\n", 1);

		runit = runit + 1;
	}
}
