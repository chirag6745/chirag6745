//while / do...while loop
//1 01 010 1010 10101
#include<stdio.h>
int main()
{
	int i,j,n=1;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(n==1)
			{
				printf("%d ",n);
				n--;
			}
			else if(n==0)
			{
				printf("%d ",n);
				n++;
			}
			j++;
		}
	i++;
	printf("\n");
	}
}

/*
#include<stdio.h>
int main()
{
	int i,j,n=1;
	i=1;
	do
	{
		j=1;
		while(j<=i)
		{
			if(n==1)
			{
				printf("%d ",n);
				n--;
			}
			else if(n==0)
			{
				printf("%d ",n);
				n++;
			}
			j++;
		}
	i++;
	printf("\n");
	}while(i<=5);
}
*/