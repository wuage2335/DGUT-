#include<stdio.h>
int  main()
{
    int m,height, weight, age;//m==1, man;  m===2,woman
    scanf("%d%d%d%d",&m,&height, &weight, &age);
    if(m == 1)
    {
        if(height > 170 && weight > 60)
        {
            if(age>=18 && age<=24)
                printf("saler");
            else
                printf("Service");
        }
    }
    else
    {
        if(height > 160 && weight > 45)
        {
            if(age>=18 && age<=24)
                printf("saler");
            else
                printf("Service");
        }
    }
    return 0;
}
