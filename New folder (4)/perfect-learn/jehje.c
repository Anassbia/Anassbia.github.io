#include <stdio.h>
int main()
{
    int a=20, b=5, c=-10, d=2, x=12, y=15, q;

    q = (5*x) + 2*((3*b) + 4);
    printf("1) q=%d \n", q);

    q = (5*(x + 2)*3)*(b + 4);
    printf("2) q=%d \n", q);

    q = a == (b=6);
    printf("3) q=%d et b=%d\n", q, b);

    a += (x+5);
    printf("4) a=%d \n", a);

    a=20;
    q = a != (c *= (-d));
    printf("5) q=%d et c=%d\n", q, c);
}