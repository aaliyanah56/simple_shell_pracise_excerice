#include <stdio.h>
#include <unistd.h>

/**
* main - fork example
*
* Return: Always 0.
* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 fork.c -o fork && ./fork
*/ 
int main(void)
{
pid_t my_pid;
pid_t child_pid;

child_pid = fork();
if (child_pid == -1)
{
printf("(%u)!\n", my_pid);
}
else
{
printf("(%u) %u\n", my_pid, child_pid);
}
return (0);
}
