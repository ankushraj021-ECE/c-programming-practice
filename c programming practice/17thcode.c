#include<stdio.h>
#include<stdlib.h>
int main()//pallidrome or not

{
    system("cls");
    int n,r,digit,x;
    
    r=0;
    printf("Enter a number: ");
    scanf("%d",&n); 
    x=n;

    while(n!=0)
    {
        digit = n%10;
        r=r*10+digit;
        n=n/10;
    
    }
    printf("The reverse of the number is: %d\n",r);
    if (r==x)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
                   
    return 0;
}