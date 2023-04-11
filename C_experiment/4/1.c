#include<stdio.h>
int main()
{
    int m, n;
    int num1;
    
    scanf("%d%d", &m, &n);

    for(num1 = m; num1 <= n; num1++)
    {
        if(num1 / 10 == 3 || num1 / 10 == 7)//在num1位二位数时
        {
            printf("%d\t",num1);
        }

        if((num1 / 10) % 10 == 3 || (num1 / 10) % 10 == 7)//num1位三位数及以上
        {
            printf("%d\t", num1);
        }
    }

    return 0;
}