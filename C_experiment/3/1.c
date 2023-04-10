#include <stdio.h>
int  main()
{
    double x;
    scanf("%d",&x)
    if(x <1600)
    printf("%d",x);
    else if(x<2400)
    printf("%d",0.95*x);
    else if(x<3200)
    printf("%d",0.9*x);    
    else if(x<6400)
    printf("%d",0.85*x);    
    else if(x>=2400)
    printf("%d",0.8*x);
}