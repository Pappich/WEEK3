#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int n,i,j,a,b,c,x;
    printf("Enter your number :");
    scanf("%d",&n);
    a = (2*n)-1;
    for(i=1;i<=n-1;i++)
	{  
        a = a-1;
        b = a;
	}
	for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=b;j++)
		{
            if(j<=i)
            {
                printf("-");
                c  = c+1;
            }
            else
        	{
                printf("*");
            }
        }
        for(x=1;x<=c;x++)
		{
            printf("+");
        }
   	c=0;
        b=b+1;
  	printf("\n");
	}
	for(i=1;i<=(2*n)-1;i++)
	{
		printf("*");
	}
	return 0;
}
