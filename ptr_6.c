
//swapping using calling by reference pointer

#include<stdio.h>

int swap(int *x, int *y)
{
	int t ;
	t = *x ;
	*x = *y ;
	*y = t ;
	
	printf("a = %d & b = %d\n",*x,*y);
	
}

int main()
{
	int a , b ;
	printf("Enter two numbers__");
	scanf("%d%d",&a, &b);
	
	swap(&a,&b);
	printf("a = %d & b = %d\n",a,b);
	
	return(0);
}

















/*#include<stdio.h>

int swap(int x , int y)
{
    int t = x ;
    x =y ;  
    y = t ;
    
    printf("a = %d & b = %d\n",x,y);
}
int main()
{
	int a, b ;
	printf("Enter two numbers__"); 
	scanf("%d%d",&a,&b);
    swap (a,b);
	printf("a = %d & b = %d\n",a,b);
	
	return(0);
}
*/