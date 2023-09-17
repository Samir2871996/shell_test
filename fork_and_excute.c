#include "shell.h"
/**
 * fork_and_excute - A c function that excude the commands
 *
 * @command: toknized array
 * @argv: command line passed while excuting
 *
 * Return: status
*/

int fork_and_excute(char **command, char **argv)
{
pid_t child;
int statues;

child = fork();

if (child == 0)
{
if (execve(command[0], command, environ) == -1)
{
perror(argv[0]);
free_array(command);
exit(127);
}
}
else
{
free_array(command);
waitpid(child, &statues, 0);

}

return (WEXITSTATUS(statues));


}


