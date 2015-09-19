#include <stdio.h>
int main()
{
	int fun(int i);
	printf("%d",fun(5));
	return 0;
}

int fun(int i)
{
	if (i==0)
		return 1;
	else
		return i*fun(i-1);
}
