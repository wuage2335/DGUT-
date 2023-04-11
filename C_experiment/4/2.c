#include<stdio.h>
int  main()
{
    int num,nog = 0,num1;//num is number,nog is number of digits;
    int v = 1;//v is verify which is used to judge if num is a prime number.
    int i;
    
    scanf("%d",&num);
    num1 = num;

    while(num1 / 10)
    {
        num1 = num1 / 10;
        nog++;
    }
    nog++;//while num only remainder single digits, num/10 == 0, which is not established.
    printf("%d\t",nog);

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {   
            v = 0; 
            break;
        }
    }

    if(v == 1)
        printf("True");
    if(v == 0)
        printf("Flase");

}
