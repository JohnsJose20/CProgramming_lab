	#include <stdio.h>
	int main()
	{
	int r1,r2,c1,c2,i,j;
	
	
	printf("Enter the size of rows & cloumns of first matrix:");
	scanf("%d %d",&r1,&c1);
	
	printf("Enter the size of rows & cloumns of second matrix:");
	scanf("%d %d",&r2,&c2);
	
	int A[r1][c1];
	int B[r2][c2];
	int r3=r1,c3=c1;
	int C[r3][c3];
	
	
	
		if(r1==r2 && c1==c2)
		{
		
			printf("Enter the valus of first matrix:");
			
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
				scanf("%d",&A[i][j]);
				}
			}
			
			printf("Enter the valus of second matrix:");
					
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
				scanf("%d",&B[i][j]);
				}
			}
	
			for(i=0;i<r3;i++)
			{
				for(j=0;j<c3;j++)
				{
				C[i][j]=A[i][j]+B[i][j];
				}
			}
			
			printf("\nThe Resultant matrix is :\n\n");	
			
	 		for(i=0;i<r3;i++)
			{
				for(j=0;j<c3;j++)
				{
				
				printf("%d \t",C[i][j]);
				
				}
				
				printf("\n");
			}
			
			printf("\n");
		}
		else
		{
		
		printf("Matrix Addition is not Possible\n");
		
		}
	return 0;
	}
