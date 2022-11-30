//Roll No:01 : Rakhi Wajgi 
//program 4 : program based on strucures
#include<stdio.h>
#include<conio.h>
#define MAX 4
#define SIZE 15 //macro definition
struct student_info
{
	int rno;          //2 bytes
	char name[SIZE];   //15 bytes
	float percent;     // 4 bytes  total size of one record is 21 bytes
	
}st[MAX];

int main()
{
	int n,i, roll_no;
	char res;
	printf("\nEnter no. of students:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter roll no:\t");
		scanf("%d",&st[i].rno);
		printf("\nEnter name :\t");
		scanf("%s",st[i].name);
		printf("\nEnter percentage:\t");
		scanf("%f",&st[i].percent);
	}
	printf("\n\t\tDisplay database");
	printf("\nRoll No\t\tName\t\tPercentage\n---------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%s\t\t%f\n",st[i].rno,st[i].name,st[i].percent);
	}
do
{
	
	printf("\nEnter roll no to be searched:\t");
	scanf("%d",&roll_no);
	for(i=0;i<n;i++)
	{
		if(st[i].rno == roll_no)
		{
			printf("%d\t\t%s\t\t%f\n",st[i].rno,st[i].name,st[i].percent);
			break;	
		}
	}
	if(i==n)
	printf("roll no not found");
	printf("\nWant to search further roll no:\t");
	scanf(" %c",&res);
}while(res =='y');
	
}
/*-----------------Output----------------------------

Enter no. of students:  2

Enter roll no:  11

Enter name :    Rakhi

Enter percentage:       78

Enter roll no:  12

Enter name :    Anvee

Enter percentage:       76

                Display database
Roll No         Name            Percentage
---------------------------------------
11              Rakhi           78.000000
12              Anvee           76.000000

Enter roll no to be searched:*/
