#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
* main - fork & wait example
*
* Return: Always 0.
*/
int main(void)
{
mypid_t child_pid;
ppid_t getppid;
int status;

child_pid = fork();
if (child_pid == -1)
{
perror("Error:");
return (1);
}
if (child_pid == 0)
{
printf("child_pid\n", child_pid);
sleep(3);
}
else
{
wait(&status);
printf("ppid_t\n", getpid);
}
return (0);
}
