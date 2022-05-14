#include <stdio.h>
#include <string.h>

/**
* main - splits a string and returns an array of each word of the string
*
* Return: 0
*/
int main(void)
{
int j, i = 0;
char str[80] = "hello fatma goodbye";
char *delim = " ";
char *result;
char *words[5];

/* get first token */
words[i++] = strtok(str, delim);
//result words incremented

/* get all other tokens */
while((res = strtok(NULL, delim)))
words[i++] = res;

/* print all tokens */
for (j = 0; j < i; j++)
printf("%s\n", words[j]);

return (0);
}
