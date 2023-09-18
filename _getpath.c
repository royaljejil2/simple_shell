#include "shell.h"
/**
 * _getpath - Retrieve the value of the PATH variable
 * @env: array of environment variables
 * Return: a pointer to the value of the PATH variable
 */

char *_getpath(char **env)
{
	size_t i = 0;
	size_t var = 0;
	size_t length = 5;

	char *path = NULL;

	for (i = 0; _strncmp(env[i], "PATH=", 5); i++){
		;
	}

	if (!env[i]) {
		return (NULL);
	}

	for (length = 5; env[i][var]; length++, var++){
		;
	}
	
	path = malloc((length + 1) * sizeof(char));

	if (!path) {
		return (NULL);
	}

	for (var = 5, length = 0; env[i][var]; length++, var++) {
		path[length] = env[i][var];
	}

	path[length] = '\0';

	return (path);
}
