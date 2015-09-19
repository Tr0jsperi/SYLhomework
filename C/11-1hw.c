#include <stdio.h>
void main()
{
  char month[12][3]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
  char *p;
  p=&month[0][0];
  int i=0;
  printf("Please enter the number of the month:");
  scanf("%d",&i);
  printf("The month you entered is: ");
  int j;
  for (j=0;j<3;j++)
    printf("%c",*(p+3*i-3+j));
}
