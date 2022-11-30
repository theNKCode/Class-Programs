#include<stdio.h>
#define max 10
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
l=0;
h=n-1;
quick_sort(a,l,h);
printf("\nSorted sequence is:\n ");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}

 }
void quick_sort(int a[], int lt,int rt)
{
    int pivot, pindex, last, temp;
    if(lt<rt)
    {
        pivot = a[lt];
        pindex=lt;
        last =rt;




        do
        {
            while(pivot<a[rt] && lt<=rt)
                rt--;
            while(pivot >a[lt]&& lt<=rt)
                lt++;
            if(lt<rt)
            {
                temp =a[rt];
                a[rt]=a[lt];
                a[lt]=temp;
            }

        }while(lt<rt);
                if(lt>rt)
                   {
                       temp =a[rt];
                a[rt]=pivot;
                a[pindex]=temp;
                   }

                quick_sort(a,pindex,rt-1);
                quick_sort(a,rt+1,last);
    }
}
