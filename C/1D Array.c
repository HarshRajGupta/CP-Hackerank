#include <stdio.h>
#define MAX 100000

int main() 
{
    int n, Arr[MAX];
    int sum = 0;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
       scanf("%d", &Arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        sum += Arr[i];
    }

    printf("%d", sum);

    return 0;
}