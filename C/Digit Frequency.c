#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[1000];
    int l, a, n[10];
    for (int i=0; i<10; i++)
    {
        n[i]=0;
    }
    gets(s);
    l=strlen(s);
    for (int i=0; i<l; i++)
    {
        a=s[i];
        if (a>=48 && a<=57)
        {
            n[a-48] = n[a-48] + 1;
        }
    }
    for (int i=0; i<10; i++)
    {
        printf("%d ",n[i] );
    }
    return 0;
}