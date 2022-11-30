#include<stdio.h>
#define MAX 10
int main()
{
    int n, a[MAX],x,i,j;

    printf("\nEnter no. of Elements:\t");
    scanf("%d",&n);
    printf("\n\tEnter elements:\n");
for(i=0;i<n;i++)
{
    printf("\n\t\tEnter a[%d]",i);
    scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
    x =a[i];
    j=i-1;
    while(j>=0 && x <a[j]  )
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=x;
}
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);

}
}
