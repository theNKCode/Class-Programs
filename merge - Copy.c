#include<stdio.h>
#define max 10
void merge(int a[],int low ,int mid, int high){

int b[max];
int i,j,k;
   i=low;
   j=mid+1;
   k=low;
   while(i<=mid && j<=high){
    if(a[i]<a[j]){
        b[k]=a[i];
        k++;
        i++;
    }
    else{
        b[k]=a[j];
        k++;
        j++;
    }
   }
   // if right half is over copy elements from left part
   while(i<=mid){
    b[k]=a[i];
    k++;
    i++;
   }
   // if left half is over copy elements right part
    while(j<=high){
        b[k]=a[j];
        k++;
        j++;
    }
    // now copy the b array in a array
    for(int i=low;i<k;i++){
        a[i]=b[i];
    }

}


void divide(int a[],int low , int high){
  int mid;
  if(low<high){
    mid=(low+high)/2;
    // left part
    divide(a,low,mid);
    // right part
    divide(a,mid+1,high);
    // now merge
    merge(a,low,mid, high);
  }

}
 int main()
 {

int a[max],n,i,l,h;
printf("Enter no of elements:\t");
scanf("%d",&n);
printf("\n\tEnter elements:\n");
for(i=0;i<n;i++)
{
    printf("\n\t\tEnter a[%d]",i);
    scanf("%d",&a[i]);
}
l=0;h=n-1;
divide(a,l,h);
printf("\nSorted sequence is:\n ");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}

 }


