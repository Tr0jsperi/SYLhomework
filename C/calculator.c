#include<stdio.h>
int main()
{
	double num1=0.0;
	double num2=0.0;
	char op=0;
	printf("\nEnter the calculation\n");
	scanf("%lf%c%lf",&num1,&op,&num2);
	switch (op)
	{
		case '+':
			printf("=%lf\n",num1+num2);
			break;
		case '-':
			printf("=%lf\n",num1-num2);
			break;
		case '*':
			printf("=%lf\n",num1*num2);
			break;
		case '/':
			if(num2==0)
				printf("\n\n\aDavision by zero error!\n");
			else
				printf("=%lf\n",num1/num2);
			break;
		case '%':
			if(num2==0)
				printf("\n\n\aDavision by zero error!\n");
			else
				printf("=%ld\n",(long)num1%(long)num2);
			break;
		default:
			printf("\n\n\a You didn't input a equation\n");
			break;
	}
	return 0;
}
