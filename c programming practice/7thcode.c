#include<stdio.h>
#include<stdlib.h>
int main()//factorial of given number
  
{
    system("cls");
    int n,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d = %d\n", n, fact);
    return 0;
}