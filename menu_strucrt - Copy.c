#include<stdio.h>
#include<stdlib.h>
struct mobiles
{
    int storage;
    char model[15];
    float cost;
    }MB[5];
    int main(){

    int n,i,ch;
    char res;
    do
    {
        printf("\n1. creation\n2.display\n3.search\n4. update");
        printf("\nEnter your choice:\t");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1://creation
            printf("enter the number of records \n");
        scanf("%d",&n);
            for(i=0;i<n;i++){
                {
        printf("\n\t\tEnter storage:\t");
        scanf("%d",&MB[i].storage);
        printf("\n\t\tEnter model:\t");
        scanf("%s",MB[i].model);
        printf("\n\t\tEnter cost:\t");
        scanf("%f",&MB[i].cost);
   }
            }
                break;
        case 2://display
    printf("\nstorage\tModel\tcost\n_________________________________");
       for(i=0;i<n;i++)
    {
        printf("\n%d\t%s\t%f\n",MB[i].storage,MB[i].model,MB[i].cost);

    }
            break;
        case 3: //search
             break;
        case 4://update
                break;

        deafult:
            exit(0);
        }//switch
        printf("\n\t\t want to continue");
        scanf(" %c", &res);
    }while(res == 'y');


    }
