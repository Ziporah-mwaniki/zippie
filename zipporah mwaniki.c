/*........................
project:county library management
author :Sandra
date   :August,2021
license:MIT
compiler:C99
..........................*/



#include <stdio.h>

struct library
{
char bookname[50];
char author[50];
int noofpages;
float price;
char user[20];
char username[5];
};
int main()
{
   int pass,x=3;
    while(x!=0)
        {
        //enter your password
        printf("\ninput the password\n");
    scanf("%i",&pass);
    if(pass==6769)
    {
        //if you enter a valid password correct password is printed
        printf("correct password");
        x=0;
    }
    else
    {
        //if you enter invalid password wrong password is printed
        printf("wrong password");

    }
        }
  struct library lib[100];
  char bookname[30];
  int i,j,keepcount;
  i=j=keepcount = 0;
  while(j!=6){
    printf("\n1. add book\n");
    printf("2.edit book\n");
    printf("3.return book\n");
    printf("4.lend a book\n");
    printf("5.delete users\n");
    printf("6.Add user\n");
    printf("7.fine if book returned late");

    printf("\n8.exit\n");printf("\n\nEnter one of the above:");
    scanf("%d",&j);
    switch(j){
    /*Add book*/
case 1:
    printf("Enter book name = ");
    scanf("%s",lib[i].bookname);
    printf("Enter author name = ");
    scanf("%s",lib[i].author);
    printf("Enter pages = ");
    scanf("%d",&lib[i].noofpages);
    printf("Enter price = ");
    scanf("%f",&lib[i].price);
    keepcount++;
    i++;
    break;
case 3:
    {
        printf("Enter book name =\n");
        scanf("%s",lib[i].bookname);
        printf("Enter date returned=\n");
        scanf("%s",lib[i].author);
    }
    break;
case 2:
    {
        printf("Enter book name=\n");
        scanf("%s",lib[i].bookname);
        printf("Enter author name=\n");
        scanf("%s",lib[i].author);
        printf("Enter pages=");
        scanf("%d",&lib[i].noofpages);
        printf("Enter price=");
        scanf("%f",&lib[i].price);
        keepcount++;
        i++;
    }
    break;
case 4:
    {
        printf("Enter bookname:");
        scanf("%s",lib[i].bookname);
        printf("Enter the date issue:");
        scanf("%s",lib[i].username);
        printf("book lended");

    }
    break;
case 5:
    {
        printf("Enter the username:");
        scanf("%s",lib[i].username);
        printf("userdelete");
    }
    break;
case 6:
    {
        printf("\nFine if the book is returned late:%d",keepcount);
        break;
        exit(0);

    } break;
case 7:
    {
        printf("Enter user:");
        scanf("%s",lib[i].user);
        printf("adduser");
    }

    }

     return 0;

  }


}
