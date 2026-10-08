#include <stdio.h>
#include <stdlib.h>
int main()//sum of digits of given number 
  
{
    system("cls");
    
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        sum= sum +n%10;
        n/=10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}