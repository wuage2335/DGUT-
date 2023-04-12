#include<stdio.h>
int main()
{
	int i = 0,j = 0;
	char str[80] = {0};
	printf("please input:");
	scanf("%s",str);
	for(i=80;i>=0;i--)
	{
		if(str[i] - 'A' > 0 && str[i] - 'Z' <= 0 )
		{
			if(str[i] == 'A' || str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U' ||str[i] == 'E')
				continue;
			else
				j++;
		}
	}
	printf("%d",j);
	return 0;
}
