#include<stdio.h>

int main()
{
	int n=1,i,j,num,a[15],temp;

	printf("������һ������n(1<n<10:)");
	scanf("%d",&n);
	printf("������n����ͬ��������");
	for(i = 0; i< n; i++)
	{
		scanf("%d",&a[i]);		
	}
	scanf("%d",&num);
    for(i = 1; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
	}
	for(i = 0; i< n; i++)
	{
		if(a[i] != num )
			printf("%d ",a[i]);		
	}
	return 0;
}


