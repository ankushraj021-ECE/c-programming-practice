#include<stdio.h>
#include<stdlib.h>
int main()//positive ,negative or zero

{
    system("cls");
    int n;
    printf("enter the number you want to check:");
    scanf("%d",&n);
    if(n>0)
    {printf("%d is a positive number\n",n);}
    else if(n<0)
    { printf("%d is a negative number\n",n);}
    else
    {printf("%d is zero\n",n);}

    }

