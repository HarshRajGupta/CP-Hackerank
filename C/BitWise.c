#include <stdio.h>
int main(void)
{
    int n, k;
    scanf("%d%d", &n, &k);
    int a, b, c;
    a = b = c = 0;
    for (int i = 1; i <= k ; ++i)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((a < (i & j)) && (i & j) < k)
                a = i & j;

            if ((b < (i | j)) && ((i | j) < k))
                b = i | j;

            if ((c < (i ^ j)) && (i ^ j) < k)
                c = i ^ j;
        }
    }
    printf("%d\n%d\n%d", a, b, c );
    return 0;
}