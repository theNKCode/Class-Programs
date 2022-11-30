//Rakhi Wajgi
//Dynamic Memory allocation for 2-D array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	
	//int **a;
	
	int c,r, i,j;
	printf("\nEnter no. of rows and columns:\t");
	scanf("%d%d",&r,&c);
	int **a = (int**)malloc(r * sizeof(int*));
	
	for (i = 0; i < r; i++)
        a[i] = (int*)malloc(c*sizeof(int));
	
	for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
		
		printf("\nEnetr a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
		
}
	for(i=0;i<r;i++)
	for (j=0;j<c;j++)
		printf("\n%d",a[i][j]);
	
}
	

