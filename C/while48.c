//while / do...while loop
// (reverse triangle of phramid) ***** **** *** ** *
#include<stdio.h>
int main()
{
	int i,j,sp=10;
	i=5;
	while(i>=1)
	{
		j=1;
		while(j<=sp)
		{
			printf(" ");
			j++;
		}
		j=i;
		while(j>=1)
		{
			printf("* ");
			j--;
		}
	i--;
	sp++;
	printf("\n");
	}
}

/*
#include<stdio.h>
int main()
{
	int i,j,sp=10;
	i=5;
	do
	{
		j=1;
		while(j<=sp)
		{
			printf(" ");
			j++;
		}
		j=i;
		while(j>=1)
		{
			printf("* ");
			j--;
		}
	i--;
	sp++;
	printf("\n");
	}while(i>=1);
}
*/