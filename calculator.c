//Authore: Johns Jose

#include <stdio.h>
int main() 
{
	int num1,num2;
	char op;
	printf("\nEnter the First Number:");
	scanf("%d",&num1);
	printf("\nEnter the Second Number:");
	scanf("%d",&num2);
	printf("\nEnter the Operator:");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
			int sum = num1+num2;
			printf("\nThe sum of %d + %d = %d\n",num1,num2,sum);
			break;
		case '-':
			int sub = num1-num2;
			printf("\nThe difference between %d - %d = %d\n",num1,num2,sub);
			break;
		case '*':
			int mul = num1*num2;
			printf("\nThe product of %d * %d = %d\n",num1,num2,mul);
			break;
		case '/':
			float div = num1/num2;
			printf("\n %d / %d = %f\n",num1,num2,div);
			break;
		case '%':
			int mod = num1%num2;
			printf("\nThe Modules of %d mod %d = %d\n",num1,num2,mod);
			break;
		default:
			printf("Invalid Entry/n");
			break;
	}
	return 0;
}
