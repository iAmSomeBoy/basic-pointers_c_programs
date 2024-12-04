#include<stdio.h>

int main()
{
	int age=25;
	
	int *ptr = &age;
	
	printf("%d\n",age);
	printf("%p\n",ptr);
	
	int nage = *ptr ;
	
	printf("%d",nage);
	
	
	return(0);
}