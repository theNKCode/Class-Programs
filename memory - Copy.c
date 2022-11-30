#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, n;
    printf("\nEnter no. of elements:\t");
    scanf("%d",&n);
    *a =(int*)malloc(n*sizeof(int));
    printf("\nEnter elements");
    for(int i=0;i<n;i++)
    {
        printf("\n\t\tEnter a[%d]: ",i);
        scanf("%d",&a[i]);

    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }
    return 0;
}
