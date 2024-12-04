//two kind of pointers

#include<stdio.h>

int square(int number)
{
	number = number * number ;
	printf("%d\n",number);
	
}

int _square(int *number)
{
	*number = (*number) * (*number);
	printf("%d\n",*number);
	
}
int main()
{
	int n ;
	printf("Enter any number__");
	scanf("%d",&n);
	square(n);                 //call by values
	printf("Number = %d\n\n",n);
	
	_square(&n);                //call by reference
	printf("Number = %d\n",n);
	
	
	return(0);
}