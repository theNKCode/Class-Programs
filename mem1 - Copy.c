#include<stdio.h>
int main()
{
    int *a[3];
    int i,j,c;
    printf("\nenter no of columns;\t");
    scanf("%d",&c);
    for(i=0;i<3;i++)
    {
        a[i] = (int*) malloc(c*sizeof(int));
    }
    printf("\nEnter elements:\t");
    for(i=0;i<3;i++)
    {
       for(j=0;j<c;j++){

      printf("\nEnter a[%d][%d])",i,j);
      scanf("%d",&a[i][j]);
    }

    }
for(i=0;i<3;i++)
{
   for(j=0;j<c;j++){

      printf("%d\t",a[i][j]);
    }
    printf("\n");
    }



}
