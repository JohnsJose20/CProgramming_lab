#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100],str2[100];
	
	printf("\n Enter 1st string:");
	scanf("%[^\n]",str1);
	getchar();
	
	printf("\n Enter 2nd string:");
	scanf("%[^\n]",str2);

	if(strcmp(str1,str2)==0)
	{
	printf("\n The two strings are same \n");
	}
	else
	{
	printf("\n Both string are not equal \n");
	}
	
return 0;
}
