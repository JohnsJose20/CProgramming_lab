#include<stdio.h>
int fib(int n)
{
if(n==1)
return 1;
if(n==0)
return 0;
else
return fib(n-1)+fib(n-2);
}
int main ()
{
int n,i;	
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	printf("The Fibonacci series is:\n");
	
	for(i=0;i<n;i++)
	{
	printf("%d ",fib(i));
	}
	printf("\n");
	return 0;
}
