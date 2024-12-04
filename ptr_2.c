#include<stdio.h>

int main()
{
	int x = 24 ;
	int *ptr = &x ;
	
	printf("%d\n",x);
	printf("%p\n",x);
	printf("%p\n",ptr);
	printf("%d\n\n",*ptr);
	
	
	*ptr = 0 ; 
	printf("%d\n",x);
	printf("%p\n",x);
	printf("%p\n",ptr);
	printf("%d\n\n",*ptr);
	
	*ptr += 5 ;
	printf("%d\n\n",*ptr);
	
	(*ptr)++ ;
	printf("%d\n\n",*ptr);
	
	return(0);
	
}