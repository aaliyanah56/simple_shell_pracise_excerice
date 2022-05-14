#include <stdio.h>

/**
* main - prints all the arguments, without using ac
* @ac: number of commandline arguments
* @av: array of commandline arguments
*
* Return: 0
*/

int main(int ac __attribute__((unused)), char **av)
{
int i;
for (i = 0; i < *av[i]; i++)
{
printf("%s\n", av[i]);
}
return (0);
}
