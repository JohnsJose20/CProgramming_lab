#include <stdio.h>
int SumofArray(int arr[],int size);
int main()
{
	int result,i,size;
	
	printf("Enter the limit: ");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter the elements: ");
	
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	}
	result=SumofArray(arr,size);
	printf("The sum is %d",result);
	printf("\n");
	return 0;
}
	int SumofArray(int arr[],int size)
	{
	int sum=0;
	for(int i=0;i<size;i++)
	{
	sum=sum+arr[i];
	}
	return sum;
	}
	
