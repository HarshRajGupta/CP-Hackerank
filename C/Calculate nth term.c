#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) 
{
    if(n == 0)
        return 0;
    else
    {
        int sum = a+b+c;
        find_nth_term(n-1, b, c, sum);
        return sum;
    }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}