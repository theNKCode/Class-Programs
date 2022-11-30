#include<stdio.h>
int main()
{

    int a, b, s;
    printf("\n\tEnter values of a and b");
    scanf("%d%d",&a,&b);
    printf("\n\t\t in main before call value of a is %d",a);
    printf("\n\t\t in main before call value of b is %d",b);
    s =add(&a,&b);
    printf("\n\t\t\tSum is %d", s);
    printf("\n\t\t in main afetr call value of a is %d",a);
    printf("\n\t\t in main after call value of b is %d",b);
}
int add(int *a, int *b)
{
    printf("\n\t\t in function value of a is %d",*a);
    printf("\n\t\t in function value of b is %d",*b);
    *a = *a+1;
    *b = *b+1;
    printf("\n\t\t in function value of a++ is %d",*a);
    printf("\n\t\t in function value of b++ is %d",*b);
    return (*a+*b);
}
