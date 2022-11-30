#include<stdio.h>
#include<stdlib.h>
int main()
{
    //int **a;
    int i,j,r,c;
    printf("\n enter no of rows and columnsL:\t");
    scanf("%d%d",&r,&c);
    int **a = (int**)malloc(r*sizeof(int*));

    for(j=0; j<r; j++){
        a[j] = (int*)malloc(c*sizeof(int));
    }

    for(i=0;i<r;i++){
        for(j=0; j<c; j++){
            printf("\nEnter a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }


for(i=0;i<r;i++){
        for(j=0; j<c; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}



