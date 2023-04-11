#include<stdio.h>

int main()
{
    int n;
    double H;
    scanf("%lf%d",&H ,&n);
    while(n)
    {
        H /= 2.00;
        n--;
    }
    printf("%lf", H);
}




