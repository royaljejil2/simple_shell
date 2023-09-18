#ifndef SHELL_H
#define SHELL_H
#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>

extern char **environ;

size_t _strncmp(char *s1, char *s2, size_t n);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_getpath(char **env);
int _valuespath(char **arg, char **env);
char *_getlinecmd(void);
void _getenv(char **env);
char **_gettkn(char *lineptr);
void _exitcmd(char **args, char *lineptr, int _exit);
int _forkcmd(char **arg, char **av, char **env,
char *lineptr, int np, int c);
char *_strtok(char *str, const char *delim);
size_t _strcspn(const char *s1, const char *s2);
char *_strchr(const char *s, int c);
size_t _strspn(const char *s1, const char *s2);

#endif
