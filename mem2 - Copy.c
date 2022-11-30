#include<stdio.h>
int main()
{
    int *a;
    int i,j,r,c;
    printf("\n enter no of rows and columnsL:\t");
    scanf("%d%d",&r,&c);
    a = (int*)malloc(r*c*sizeof(int));

    for(i=0;i<r*c;i++)
    {


      printf("\nEnter a[%d]",i);
      scanf("%d",&a[i]);
    }


for(i=0;i<r*c;i++)
{
         printf("%d\t",a[i]);
    }
    printf("\n");




}
