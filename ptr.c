#include<stdio.h>

int  main()
{
	int age= 25 ;
	
	int *ptr = &age;
	int nage = *ptr ;
//	int 
	
	printf("%d\n",age);
	printf("%p\n",ptr);
	printf("%p\n",*ptr);
	printf("%d",nage);
	
	
	
	return(0);
}