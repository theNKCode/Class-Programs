typedef struct address
{
  int houseno;
  char street[15];
  char city[15];
}adr;
typedef struct student
{
   int roll_no;
   char name[10];
   adr adr1;
   float age;
}stud;
stud st[10];
main()
{

int choice, i,n,m;
char city1[15];
char res;
do
{
    printf("\n 1.creation \n 2.display\n3. search\n4. update");
    printf("\nEnter Your choice -> \n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("enter number of students \t");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            printf("enter roll number of student %d\t",i+1);
            scanf("%d",&st[i].roll_no);
            printf("\n enter student name\t");
            scanf("%s",st[i].name);
            printf("\n enter age of sudent\t");
            scanf("%f",&st[i].age);
            printf("\n enter address \n");
            printf("\n enter house number\t");
            scanf("%d",&st[i].adr1.houseno);
            printf("\n enter street name\t");
            scanf("%s",st[i].adr1.street);
            printf("\n enter city name\t");
            scanf("%s",&st[i].adr1.city);

        }
        break;
    case 2:
        printf("Roll no.\t Name \t  Age\t House no.\t street\t City");
        printf("\n_____________________________________________\n");
        for(i=0;i<n;i++){

            printf("\n%d\t",st[i].roll_no);
            printf("%s\t",st[i].name);
            printf("%f\t",st[i].age);
            printf("%d\t",st[i].adr1.houseno);
            printf("%s\t",st[i].adr1.street);
            printf("%s\t",st[i].adr1.city);

        }
        break;
    case 3:
        printf("Enter the city name of students which u want to search ");
        scanf("%s",&city1);
        int flag=0;
        for(i=0;i<n;i++){
            printf("\n\t\t\tcity is %s", st[i].adr1.city);
            printf("\nt city1 = %s", city1);
            if(strcmp(city1,st[i].adr1.city)==0)
            {
                    printf("\nFound\n\nStudent details are follows:");
                       //printf("\n roll no:%d\n name:%s\age:%f\nhouse no:%d\nstreet:%s\ncity:%s\n\n",st[i].roll_no,st[i].name,st[i].adr1.houseno,st[i].adr1.street,st[i].adr1.city);
                    printf("\n%d\t",st[i].roll_no);
                    printf("%s\t",st[i].name);
                    printf("%f\t",st[i].age);
                    printf("%d\t",st[i].adr1.houseno);
                    printf("%s\t",st[i].adr1.street);
                    printf("%s\t",st[i].adr1.city);
                    flag=1;
           // break;
            }
        }
            if(flag==0){
                printf("\n\t\t\tStudent not found\n");
            }

        break;
    case 4:
        //update

        printf("Enter the roll no. you want to update ");
        scanf("%d",&m);
        for( i=0;i<n;i++){
            if(m==st[i].roll_no){
            printf("Enter the new house number");
            scanf("%d",&st[i].adr1.houseno);
            printf("Enter the new city");
             scanf("%s",st[i].adr1.city);
            printf("Enter the new street name");
            scanf("%s",st[i].adr1.street);
            flag=1;
            }

        }
        break;
    }

    printf("\n want to continue\n");
    scanf(" %c",&res);
}while(res =='y');
return 0;
}
