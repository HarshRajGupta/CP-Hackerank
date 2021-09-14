#include <stdio.h>
#include <string.h>
#define MAX 10000

int main() 
{
    char string[MAX];
    gets(string);
    int length = strlen(string);
    for(int i=0; i<length; i++)
    {
        int n = string[i];
        if(n == 32)
        {
            n = 10;
            string[i] = n;
        }
    }
    printf("%s", string);
    return 0;
}
