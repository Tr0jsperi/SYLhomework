#include <stdio.h>
int main()
{
	int i,j,max,min,num[10];
	printf("Please Enter 10 Numbers\n");
	for (i=0;i<10;i++)
		scanf("%d",&num[i]);
	for (i=0;i<9;i++)
		for (j=0;j<9-i;j++)
		{
			max=(num[j]>num[j+1])?num[j]:num[j+1];
			min=(num[j]<num[j+1])?num[j]:num[j+1];
			num[j]=min;
			num[j+1]=max;
		}
	for (i=0;i<10;i++)
		printf("%d\t",num[i]);
	return 0;
}
