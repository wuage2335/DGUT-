
//判断输入的不含空格字符串中是否存在D,G,U,T四个字符
#include<stdio.h>
char input[10000];
int hashTable[10000];

int main()
{
    int num = 0;//用于记录
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int verify = 1;
    while((input[num] = getchar()) != '\n')
    {
        num++;
    }

    for(num1 = 0; num1 < num; num1++)
    {
        if(input[num1] == 'D')
         hashTable[0]=1;
        if(input[num1] == 'G')
         hashTable[1]=1;
        if(input[num1] == 'U')
         hashTable[2]=1;
        if(input[num1] == 'T')
         hashTable[3]=1;                           
    }

    for(num3 = 0; num3 <= 3; num3++)
    {
        if(hashTable[num3] == 0)
            verify = 0;
    }
    
    if(verify)
        printf("TRUE");
    else
        printf("FLASE");

}






