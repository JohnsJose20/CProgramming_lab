#include <stdio.h>
int main()
{
	char str[100],temp;
	int length=0,i,j;
	
	printf("Enter the string:");
	scanf("%[^\n]",str);
	
	for(length=0;str[length]!='\0';length++);
	printf("The length is: %d \n",length);
	
	i=length-1;
	
	for(j=0;j<length/2;j++)
	{
	temp=str[i];
	str[i]=str[j];
	str[j]=temp;
	i--;
	}
	
	printf("\nThe Reverse of the String is:%s \n \n",str);
	
return 0;
}

