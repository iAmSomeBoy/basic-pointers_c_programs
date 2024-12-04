#include<stdio.h>

int main()
{
	float price = 100.25 ;
	float *ptr = &price ;
	
	printf("%.2f\n",price);
	printf("%p\n\n",*ptr);
	
	float **pptr = &ptr ;
	printf("%p\n",pptr);
	
	return(0);
}