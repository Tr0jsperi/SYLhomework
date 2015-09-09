#include <stdio.h>
int main()
{
	int i,j=0;
	int hole[10]={0};
	for (i=0;i<10000;i++)
	{
		hole[j]=1;
		j=(j+2+i)%10;
	}
	for (i=0;i<10 ;i++)
		if (hole[i]==0)
			printf("The hole number is %d\n",i+1);
	return 0;
}
