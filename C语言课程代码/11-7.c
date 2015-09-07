#include<stdio.h>
int main(){
    void copy_string(char *form,char *to);
	char *a="T am teacher";
	char b[]="You are a programmer";
	char *p=b;
	printf("string a=%s\nstring b=%s\n",a,b);
	printf("copy string a to string b:\n");
	copy_string(a,p);
    printf("\n string a=%s\n string b=%s\n",a,b);
    return 0;
}

void copy_string(char *from,char *to)
{
	int i=0;
	while(from[i]!='\0')
	{
		to[i]=from[i];
		i++;
	}
	to[i]='\0';
}