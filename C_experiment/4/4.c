#include<stdio.h>

int main()
{
    int n1, n2;
    for(n1 = 1; n1 <= 5; n1++)
    {
        for(n2 = 1; n2 <= 9; n2++)
        {
            if(n2 == 1 || n2 == 9)
                printf("*");
            else if(n1 == n2 || n2 == 10-n1)
                printf("*");    
            else   
                printf(" ");

        }
        printf("\n");
    }
}




