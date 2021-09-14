#include <stdio.h>
#include <string.h>

int main(void) 
{
	char string[100];
    gets (string);
    printf("Hello, World!\n%s", string);
    return 0;
}