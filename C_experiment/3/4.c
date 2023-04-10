#include<stdio.h>
int  main()
{
    int n,m;
    printf("=========drink saler=====\n"
    "1-apple         6\n"
    "2-watermelon    5\n"
    "3-juice         4\n"
    "4-cola          3\n"
    "5-sprite        2\n"
    "0-exit     \n"
    "==============================\n");
    scanf("%d%d",&n,&m);
    switch(n)
    {
        case 1:
            printf("apple,%d",m*6);
            break;
        case 2:
            printf("watermelon ,%d",m*5);
            break;
        case 3:
            printf("juice,%d",m*4);
            break;
        case 4:
            printf("cola ,%d",m*3);
            break;
        case 5:
            printf("sprite,%d",m*2);
            break;
        default:
            break;

    }

    return 0;
}

