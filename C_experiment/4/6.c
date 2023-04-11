#include<stdio.h>
int hashTable[10000];
int n[2]; //表示三个人各自每隔几秒放一次
int max(int *num);
int main()
{

    int num = 0, max1 = 0;      //表示各自放的数量以及最多的时间
    int count = 0;      //表示听到的次数
    
    hashTable[1] = 1;
    
    for(int n1 = 0; n1 < 3; n1++)
    {    
        if(n1 == 2)
            scanf("%d%d", &n[n1], &num);
        else
            scanf("%d", &n[n1]);
    }

    for(int t = 1; t <= num-1; t++)      //t time表示次数
    {
        hashTable[t * n[0]] = 1;          //t1 * n[n1]秒时放一次
        hashTable[t * n[1]] = 1;
        hashTable[t * n[2]] = 1;
    }

    max1=max(&num);

    for(int t1 = 1; t1 <= max1;  t1++)
    {
        if(hashTable[t1] == 1)
            count++;
    }

    printf("%d", count);
}

int max(int *num)
{
    int max1;
    int n2;
    
    for(n2 = 0; n2 < 3; n2++)//通过比较各个值得出最大所需的秒数
    {
        if(max1 < n[n2])
            max1 = n[n2];
    }

    max1 *= *num;
    return max1;
}
