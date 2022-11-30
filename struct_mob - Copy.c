#include<stdio.h>
#include<stdlib.h>
struct mobiles
{
    int storage;
    char model[15];
    float cost;
    };
    struct mobiles *MB;

    int main(){
        int n,i;
    printf("\nEnter no of records:\t");
    scanf("%d",&n);

   mb = (void*)malloc(n*sizeof(struct mobiles));
    for(i=0;i<n;i++)
    {
        printf("\n\t\tEnter storage:\t");
        scanf("%d",&mob[i]->storage);
        printf("\n\t\tEnter model:\t");
        scanf("%s",mob[i]->model);
        printf("\n\t\tEnter cost:\t");
        scanf("%f",&mob[i]->cost);
   }
    printf("\nstorage\tModel\tcost\n_________________________________");
       // for(i=0;i<n;i++)
   // {
      //  printf("\n%d\t%s\t%f\n",MB->storage,MB->model,MB->cost);

    //}




    return 0;

    }
