#include<stdio.h>
struct books
{
    int book_id;
    char title[15];
    char auth_name[15];
    float cost;

}bk[5];
int main()
{
    int i, n, ch,flg=0;
    char res;
    int target_id;
    float cost1;
   do
   {

    printf("\n1.creation\n2.display\n3.search\n4. update\n5.exit");
    printf("\nenter your choice:\t");
    scanf("%d",&ch);
switch(ch)
{
case 1:
    printf("\nEnter no of records:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter books id:\t");
        scanf("%d", &bk[i].book_id);
        printf("\nEnter title:\t");
        scanf("%s",bk[i].title);
        printf("\nEnter author name:\t");
        scanf("%s",bk[i].auth_name);
        printf("\nEnter cost of book:\t");
        scanf("%f",&bk[i].cost);

    }
    break;
case 2:
    //display
    printf("\nbook Id\tTitle\tAuthor Name\tCost\n");
    printf("\n---------------------------------------------");
    for(i=0; i<n; i++){

        printf("\n%d\t", bk[i].book_id);

        printf("%s\t",bk[i].title);

        printf("%s\t",bk[i].auth_name);

        printf("%f\t",bk[i].cost);
    }

    break;
case 3:
    //search

    printf("\nEnter the target id: ");
    scanf("%d",&target_id);

    for(i=0; i<n; i++){
        if(bk[i].book_id==target_id){
        printf("%d\t", bk[i].book_id);

        printf("%s\t",bk[i].title);

        printf("%s\t",bk[i].auth_name);

        printf("%f\t",bk[i].cost);
        flg=1;
        break;
        }

    }
    if(flg==0)
        printf("\nRecord not found");
    break;
case 4:
    //update
    printf("\n Enter the book_id whose cost is to be updated\t");
    scanf("%d",&target_id);
    printf("\nEnter the new cost\t");
    scanf("%f",&cost1);
    for(i=0;i<n;i++)
    {
        if(target_id==bk[i].book_id)
        {
           bk[i].cost=cost1;
           break;
        }
    }
    break;

deafult:
    exit(0);
}
printf("\nWant to cont...\t");
scanf(" %c",&res);
   }while(res =='y');
}
