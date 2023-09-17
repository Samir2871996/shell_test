#ifndef __SHELL_H_
#define __SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;
char *PrometInput(void);
char **TokArray(char *line);
char *_strdup(char *li);
void free_array(char **array);
int fork_and_excute(char **command, char **argv);

#endif

