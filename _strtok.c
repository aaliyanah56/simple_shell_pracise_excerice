#include<stdio.h>
#include<stdlib.h>
#include <string.h>
/**
* main - string without use of strtok
* 
* return - 0 
*/

int main()
{
char arr[100];
int i=0,len=0;

fwrite("Enter string: ");
getline(arr, 100, stdin);

len = strlen(arr);

for(i=0; i<len; i++)
{
if(arr[i]=='=')  // here in ' ' is the character upon basis of which you want to tokenize in this code there is space
{
arr[i]='\0' ;
}
}
puts(arr);

return (0);
}
