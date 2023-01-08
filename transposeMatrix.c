#include<stdio.h>
#include<conio.h>
main()
{
	int a[10][10], transpose[10][10],r,c,i,j;
	printf("Enter Rows and Columns: ");
	scanf("%d %d", &r, &c);
	
	printf("\nEnter Matrix elements:\n");
	for(i=0; i<r; i++)
	{
			for(j=0; j<c; j++)
			{
				printf("Enter element a%d%d: ",i+1,j+1);
		scanf("%d", &a[i][j]);
	      }
	}
	
	printf("\nEntered Matrix: \n");
	for(i=0; i<r;i++)
	{
		for(j=0; j<c; j++)
		{
			printf("\t%d",a[i][j]);
			if(j==c-1)
			printf("\n");
		}
	}
	for(i=0; i<r; i++)
	{
			for(j=0; j<c; j++)
			{
				transpose[j][i]=a[i][j];
	      }
	}
	
	printf("\nTranspose of the Matrix: \n");
	for(i=0; i<r;i++)
	{
		for(j=0; j<c; j++)
		{
			printf("\t%d",transpose[i][j]);
			if(j==r-1)
			printf("\n");
		}
	}
return 0;
}
