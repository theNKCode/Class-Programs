#include<stdio.h>
#define max 10
int main()
{
    int a[max];
    int i, j, n, temp;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter elements \n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }

}
