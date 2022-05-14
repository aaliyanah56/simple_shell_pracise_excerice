#include <stdio.h>
#include <string.h>

/**
* main - splits a string and returns an array of each word of the string
*
* Return: 0
*/

int main () {
char str[80] = "hello world goodbye";
const char s[2] = "-";
char *token;
   
/* get the first token */
token = strtok(str, s);
   
/* walk through other tokens */
while( token != NULL ) {
printf( " %s\n", token );
    
token = strtok(NULL, s);
}
   
return(0);
}