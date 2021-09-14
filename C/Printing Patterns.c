#include <stdio.h>
int main (void)
{
    int a;
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
        int c=a;

        for(int j=a; j>1; j--)
        {
            printf("%d ",c);

            if(c>a-i)
            {
                c=c-1;
            }
        }
        printf("%d",c);

        for(int j=2; j<=a; j++)
        {
            if(c<j)
            {
                c=c+1;
            }

            printf(" %d",c);
        }

        printf("\n");
    }

    for(int i=2; i<=a; i++)
    {
        int c=a;

        for(int j=a; j>1; j--)
        {
            printf("%d ",c);

            if(c>i)
            {
                c=c-1;
            }
        }
        printf("%d",c);

        for(int j=2; j<=a; j++)
        {
            if(c<j)
            {
                c=c+1;
            }

            printf(" %d",c );
        }

        printf("\n");
    }
    return 0;
}
