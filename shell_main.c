#include "shell.h"
/**
 * main - entry point of shell
 * @argsCount: args counter
 * @av: args 
 * @env: environ
 * Return: 0
 */
int main(int argsCount, char **args, char **env)
{
	char *getcmd = NULL; 
	char **usercmd = NULL;
	int pathValue = 0;
	int _exit = 0;
	int n = 0;
	int i = 1;
	(void)argsCount;

	while (i)
	{
		getcmd = _getlinecmd();
		if (getcmd == NULL)
		{
			if (isatty(STDIN_FILENO)) {
				write(STDOUT_FILENO, "\n", 1);
			}
			exit(_exit);
		}
		else
		{
			pathValue = pathValue + 1;
			usercmd = _gettkn(getcmd);
			if (usercmd == NULL)
			{
				free(getcmd);
				continue;
			}
			if (!_strcmp(usercmd[0], "env")) {
				_getenv(env);
			}
			
			if (usercmd[1] == NULL && (!_strcmp(usercmd[0], "exit"))) {
				_exitcmd(usercmd, getcmd, _exit);
			}
			else
			{
				n = _valuespath(&usercmd[0], env);
				_exit = _forkcmd(usercmd, args, env, getcmd, pathValue, n);
				if (n == 0) {
					free(usercmd[0]);
				}
			}
			free(usercmd);
		}
		free(getcmd);
	}
	return (_exit);
}
