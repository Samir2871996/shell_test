#include "shell.h"
/**
 * _strdup - function that duplicate a string
 *
 * @li: string to be duplicated
 *
 * Return: the duplicated string
*/

char *_strdup(char *li)
{
char *new_ptr;
int i;
int len = 0;

if (li == NULL)
{
return (NULL);
}
while (*li != '\0')
{
len++;
li++;
}
li = li - len;
new_ptr = malloc(sizeof(char) * (len + 1));
if (new_ptr == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
new_ptr[i] = li[i];
}

return (new_ptr);
}






