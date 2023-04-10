#include<stdio.h>
int  main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("monday,zhao");
            break;
        case 2:
            printf("thuesday,qian");
         break;
        case 3:
            printf("wednesday,sun");
            break;
        case 4:
            printf("thursday,li");
            break;
        case 5:
            printf("friday,zhou");
            break;
        case 6:
            printf("saturday,liu");
            break;
        case 7:
            printf("don'need work");
            break;

        default:
            break;

    }

    return 0;
}
