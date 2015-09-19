#include <stdio.h>
int findnum(int** p,int** q)
{
	do{
		if (**p==-1)
			*p=*q;
		else
			*p=*p+1;
	}while (**p<1);
	return **p;
}

void main()
{
	int a[102];
	int *p=&a[0];
	int *q=&a[1];
	int i,j,count=5;
	a[101]=-1;
	a[0]=0;
	for (i=1;i<101;i++)
		a[i]=i;

	while(count>2)
	{
		count=0;
		for (j=1;j<101;j++)
		{
			if (a[j]!=0)
				count++;
		}
		printf("------------------------------\n");
		printf("|this round has %d !0 numbers|\n",count);
		findnum(&p,&q);
		printf("|find !0 number %d           |\n",*p);
		findnum(&p,&q);
		printf("|find !0 number %d           |\n",*p);
		findnum(&p,&q);
		printf("|del !0 number %d            |\n",*p);
		printf("------------------------------\n");
		printf("\n");
		*p=0;
	}
	for (i=1;i<101;i++)
	{
		if (a[i]!=0)
			printf("the last number is %d\n",a[i]);
	}



	//printf("%d",*p);
}
