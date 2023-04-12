#include<stdio.h>
int main()
{
	int n=1,i,a[15],max=0,min=100000,temp;
	int n1 = 0, n2 = 0;
	printf("请输入一个整数n(1<n<10:)");
	scanf("%d",&n);
	printf("请输入n个不同的整数：");
	
	for(i=0;i < n;i++)
		scanf("%d",&a[i]);
	
	temp = a[n-1];
	for(i=0,max=0; i < n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			n1 = i;
		}
	}

	a[n-1]= max;
	a[n1] = temp;
	
	temp = a[0];
	for(i=0;i < n;i++)
	{
		if(a[i]<min)
		{	
			min=a[i];
			n2 = i;
		}
	}

	a[0]= min;
	a[n2] = temp;
	
	for(i=0;i < n;i++)
		printf("%d ",a[i]);


	return 0;
}


