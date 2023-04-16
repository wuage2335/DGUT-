#include <stdio.h>

int isPrimer(int *z)
{
    int t;
    int n;
    int verify = 1;
    n = *z;
    for(t = 2; t < n; t++)
    {
        if(n % t == 0 || n == 1)
        {
            verify = 0;
        }
    }
    if(verify)
        return 1;
    else    
        return 0;
}


int main()
{
    int n;
    int a,b;

    scanf("%d",&n);

    printf("%d\n",isPrimer(&n));

    scanf("%d%d",&a,&b);

    for(;a < b; a++)
    {
        if(isPrimer(&a))
        {
            printf("%d ",a);
        }
    }

    return 0;
}
