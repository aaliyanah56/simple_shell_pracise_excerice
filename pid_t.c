#include <stdio.h>
#include <unistd.h>

/**
* main - PID and ppid
*
* Return: Always 0.
*/
int main(void)
{
pid_t my_pid;
ppid_t my_ppid;

my_pid = getpid();
my_ppid = getppid();

printf("%u\n", my_pid);
printf("%u\n", getppid);
return (0);
}
