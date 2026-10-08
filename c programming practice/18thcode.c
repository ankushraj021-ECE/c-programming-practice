#include<stdio.h>
#include<stdlib.h>
int main()//count the digits in entered number
{
    system("cls");
    int n,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("The number of digits in the entered number is: %d\n",i);
}