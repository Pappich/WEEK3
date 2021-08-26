#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int n,i,j,x,y;
	printf("enter your number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(x=1;x<i;x++)
		{
			printf("*");
		}
		for(y=1;y<=i;y++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
