#include "shell.h"
/**
 * _valuespath - search for a command in the directories specified by PATH
 * @arg: array of command args
 * @env: array of environ variables
 * Return:  a pointer to full PATH.
 */
int _valuespath(char **arg, char **env)
{
	char *relativepath = NULL;
	char *absolutepath = NULL;
	char *tkn = NULL;
	struct stat statlineptr;
	size_t valuepath;
	size_t cmd;

	if (stat(*arg, &statlineptr) == 0)
		return (-1);
	relativepath = _getpath(env);
	if (relativepath == NULL)
	{
		return (-1);
	}
	tkn = _strtok(relativepath, ":");
	cmd = _strlen(*arg);
	while (tkn)
	{
		valuepath = _strlen(tkn);
		absolutepath = malloc((cmd + valuepath + 2) * sizeof(char));

		if (absolutepath == NULL)
		{
			free(relativepath);
			return (-1);
		}
		absolutepath = _strcpy(absolutepath, tkn);
		_strcat(absolutepath, "/");
		_strcat(absolutepath, *arg);
		if (stat(absolutepath, &statlineptr) == 0)
		{
			*arg = absolutepath;
			free(relativepath);
			return (0);
		}
		free(absolutepath);
		tkn = _strtok(NULL, ":");
	}
	free(relativepath);
	return (-1);
}
