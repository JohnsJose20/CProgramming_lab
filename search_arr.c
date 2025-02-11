#include <stdio.h>
int main()
{
	int i,n,key,pos=0,flag=0;
		printf("Enter the size of the array:");
		scanf("%d",&n); 
	int arr[n];
		printf("Enter the elements in your array: ");
		
			for(i=0;i<n;i++)
			{
			scanf("%d",&arr[i]);
			}
			
		printf("Enter the key to be searched: ");
		scanf("%d",&key);
		
			for(i=0;i<n;i++)
			{		
				if(arr[i]==key)
				{
				flag = 1;
				pos=i;
				break;
				}
			}
			
		if(flag==0)
		{
		printf("Key not found");
		}
		else
		{
		printf("Key found at Position %d \n",pos);
		}
return 0;
}
