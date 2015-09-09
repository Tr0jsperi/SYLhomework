#include <stdio.h>
int main()
{
	int i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<7;j++)
		{
			if (j>=(3-i)&&j<=(3+i))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (i=0;i<3 ;i++)
	{
		for (j=0;j<7;j++)
		{
			if (j>(i)&&j<(6-i))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
