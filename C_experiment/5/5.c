#include<stdio.h>
int main()
{
	int i = 0,j = 0;
	char str[80] = {0};
	char str_1[80];
	printf("please input:");
	scanf("%s",str);
	for(i=80;i>=0;i--)
	{
			str_1[j] = str[i];
			if(str_1[j] != 0)
			{	
				printf("%c",str_1[j]);
			}
			j++;

	}
	return 0;
}
