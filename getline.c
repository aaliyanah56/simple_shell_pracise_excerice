#include <stdio.h>
#include <stdlib.h>

/**
* main - prints user input
*
* Return: 0
*/

int main()
size_t getline (char **string, size_t *n, FILE *stream);
{
char *buffer;
size_t bufsize = 32;
//size_t characters;

buffer = malloc(sizeof(char) * bufsize);
if (buffer == NULL)
{
perror("Unable to allocate buffer");
exit(1);
}

printf("$ ");
getline(&buffer, &bufsize, stdin);
printf("%s", buffer);
//printf("characters were %zu \n", characters);

return (0);
}
