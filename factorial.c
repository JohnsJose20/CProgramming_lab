//Authore: Johns Jose

#include <stdio.h>
int main() 
{
int num,factorial=1,i=1;

	printf("\nEnter a positive integer:");
	scanf("%d",&num);
		if(num<0)
		{
		printf("\nInvalid Entry\n");
		}
		else
		{
			while(i<=num)
			{
			factorial*=i;
			i++;
			
			}
		
			printf("\nThe factorial of the number %d is %d\n",num,factorial);
		}
		
return 0;
}
	
