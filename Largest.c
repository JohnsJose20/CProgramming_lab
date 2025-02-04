#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter Three numbers:");
scanf("\n%d,\n%d,\n%d",&a,&b,&c);
if(a>b)
{
	if(a>c)
	{
	printf("%d is the largest\n",a);
	}
	else
	{
	printf("%d is the largest\n",c);
	}
}
else
{	
	if(b>c)
	{
	printf("%d is the largest\n",b);
	}
	else
	{
	printf("%d is the largest\n",c);
	}
}
return 0;
}
