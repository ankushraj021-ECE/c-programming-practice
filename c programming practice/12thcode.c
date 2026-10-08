#include<stdio.h>
#include<stdlib.h>
int main()//write the table of given number
{
    system("cls");
    int n;
    printf("enter the number you want to print the table:");
    scanf("%d",&n);
    for(int i=1;i<=10;)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
}