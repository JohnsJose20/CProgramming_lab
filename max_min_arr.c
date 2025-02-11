#include <stdio.h>
int main()
{
	int i,n,max,min,maxindex=0,minindex=0;
	printf("Enter the size of the array:");
	scanf("%d",&n); 
	int arr[n];
	printf("Enter the elements:");
		for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	max = arr[0];
	min = arr[0];
		for(i=1;i<n;i++)
		{
			if(arr[i]>max)
			{
			max=arr[i];
			maxindex=i;
			}
			if(arr[i]<min)
			{
			min=arr[i];
			minindex=i;
			}
		}
	printf("The Maximum value %d and its position %d\n",max,maxindex);
	printf("The Minimum value %d and its position %d\n",min,minindex);	
return 0;
}
	
