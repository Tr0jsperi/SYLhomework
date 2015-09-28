#include <stdio.h>
void main()
{
	int a[13]={0, -3, 6, 8, -20, 21, 8, -9, 10, -1, 3, 6, 5};
	int i,j,k,sum=0,max=0;
	int temp[13]={0};
	int end=0;
	for (i=0;i<13;i++)
		for(j=0;j<13-i;j++)
		{
			for(k=i;k<=i+j;k++)
				sum=sum+a[k];
			if (sum>max)
			{
				max=sum;
				for(k=i;k<=i+j;k++)
				{
					temp[k-i]=a[k];
					end=k-i;
				}
			}
			sum=0;
		}
	printf("The biggest sum is %d\n",max);
	printf("this max array is ");
	for(i=0;i<=end;i++)
	{
		printf("%d ",temp[i]);
	}
}
