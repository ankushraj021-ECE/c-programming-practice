#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age >=60)
     {
        printf("you are not eligible for insurence\n");
     }
     else if(age>=18)
     {
    printf("you are eligible for insurence ");
     }
     else if(age<18 && age>0)
     {
        printf("you got a 10 percent discount on your insurence\n");
     } 
     else
     {
        printf("invalid age entered \n");
     }
      
     return 0;
    }