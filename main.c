#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_BUFFER_SIZE 1024
#define PROMPT "($) "

char input[MAX_BUFFER_SIZE];
char *args[MAX_BUFFER_SIZE];
int arg_count = 0;
char *token;
pid_t pid;
int i;


int main(void) {

    while (1) {
        printf(PROMPT);
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        i = 0;
        for (i = 0; input[i] != '\0'; i++) {
            if (input[i] != ' ' && input[i] != '\n') {
                break;
            }
        }

        if (input[i] == '\0' || input[i] == '\n') {
            printf("No value entered. Pleae re-enter value\n");
            continue;
        }

        arg_count = 0;
        token = strtok(input, " \n");
        while (token != NULL) {
            args[arg_count++] = token;
            token = strtok(NULL, " \n");
        }
        args[arg_count] = NULL;

        if (strcmp(args[0], "cd") == 0) {
            if (arg_count < 2) {
                fprintf(stderr, "cd: missing argument\n");
            } else {
                if (chdir(args[1]) != 0) {
                    perror("chdir");
                }
            }
            continue;
        } else if (strcmp(args[0], "exit") == 0) {
            exit(EXIT_SUCCESS);
        }

        pid = fork();
        if (pid == -1) {
            perror("fork");
        } else if (pid == 0) {
            char *envp[] = {NULL};
            if (execve(args[0], args, envp) == -1) {
                perror("execve");
                exit(EXIT_FAILURE);
            }
        } else {
            int status;
            waitpid(pid, &status, 0);
        }
    }
    return (0);
}
