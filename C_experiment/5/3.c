//��������A�е������Сֵλ�� 
//����һ��������n(1��n��6)��n�׷���A��
//��������A�е����ֵ����Сֵλ�á�
//�ٶ�����A�е����ֵ����Сֵ��Ψһ��
#include<stdio.h>
#define N 6
int main()
{
	int n,i,j,max,min,lmin=0,hmin=0,lmax=0,hmax=0;
	int A[N][N];
	printf("PLEASE input n(n(1<=n<=6))");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	} 
	max=min=A[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[i][j]<min)
			{
				min=A[i][j];
				lmin=i;
				hmin=j; 
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[i][j]>max)
			{
				max=A[i][j];
				lmax=i;
				hmax=j;
			}
		}
	}
	A[lmin][hmin]=max;
	A[lmax][hmax]=min;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	} 
	return 0;
}
