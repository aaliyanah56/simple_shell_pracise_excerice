#include <stdio.h>
#include <stdlib.h>

int main()
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
