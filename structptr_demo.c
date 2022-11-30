#include<stdio.h>
struct book
{
    int book_id;
    float cost;

}*bk;
int main()
{
    int n,i;
    printf("\n\tEnter no. of books:");
    scanf("%d",&n);
    bk=malloc(n*sizeof(struct book));
    printf("\nsizeof int is %u",sizeof(int));
    printf("\nsizeof float is %u",sizeof(float));
    printf("\nbk = %u\n", bk);
    for(i=0;i<n;i++)
    {
        printf("bk+i = %u\n", (bk+i));

    }
}
