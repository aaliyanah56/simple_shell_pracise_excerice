#include <stdio.h>
#include <unistd.h>

/**
* main - get the parent process ID
* 
* return - 0
*/

int main()
{
int ppid;

ppid = getppid();

printf("My ppid is: %d\n", ppid);
}
