#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n); //a=23456

    int n1 = n%10;//23456%10==6
    int o1 = n1;
    n = n-n1; //23456-6=23450

    int n2 = n%100; //23450%100==50
    int o2 = n2/10; //50/10=5
    n = n-n2; //23450-50=23400

    int n3 = n%1000; //23400%1000==400
    int o3 = n3/100; //400/100=4
    n = n - n3; //23400-400=23000

    int n4 = n%10000; //23000%10000==3000
    int o4 = n4/1000; //3000/1000=3
    n = n-n4; //23000-3000=20000

    int n5 = n%100000; //20000%100000==20000
    int o5 = n5/10000; //20000/10000=2

    int o = o1 + o2 + o3 + o4 + o5; //5+4+3+2+6=20
    printf("%d", o); //12505785

    return 0;
}