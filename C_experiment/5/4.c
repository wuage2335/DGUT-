#include<stdio.h>
int main()
{
	int i;
	char str[80];
	char ch=0;
	printf("������һ���ַ�:");
	scanf("%c",&ch);
	printf("�������ַ�����");
	scanf("%s",str);
	for(i=0;i<80;i++)
	{
		if(ch==str[i])
		{
			printf("%d",i);
			break;
		}
		else
			printf("Not Found");
	}
	return 0;
}
