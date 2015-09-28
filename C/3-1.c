#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" Please enter a value : ");
	scanf("%d",&a);  //输入变量a的值
	printf("\n");
	printf("Please enter b value :");
	scanf("%d",&b);
	c=a+b;
	printf("\n%d",c);
	//print two numbers with a ','' as a seperator
	printf("Please enter a value :");
	scanf("%d,%d",&a,&b);
	c=a+b;
	printf("\n%d",c);
	return 0;
}
