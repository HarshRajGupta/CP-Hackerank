#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max = a;
    if ( max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;
    
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

// #include <stdio.h>

// int main() 
// {
//    int a,b,c,d;
//     scanf("%d%d%d%d",&a,&b,&c,&d);

//     if (a>b && a>c && a>d)
//     printf("%d",a);

//     if (b>a && b>c && b>d)
//     printf("%d",b);

//     if (c>a && c>b && c>d)
//     printf("%d",c);

//     if (d>a && d>b && d>c)
//     printf("%d",d);
//     return 0;
// }