// program to demonstrate  scope of Extern variables
#include<stdio.h>
#include "somefile.c"
extern int var1;   //declaration of variable

int main(){
var1 = 10;
printf("\n\tValue of variable var1 is %d", var1);
return 0;
}



