#include<stdio.h>
#include<stdlib.h>
int main()//divisibility by 5 and 11
{int n;
    system("cls");
    printf("Enter your number:");
    scanf("%d",&n);

    if(n%5==0 && n%11==0)
    {
        printf("%d is divisible by both 5 and 11\n",n);
    }
    else if(n%5==0)
    {
        printf("%d is divisible by 5 but not by 11\n",n);
    }
    else if(n%11==0)
    {
        printf("%d is divisible by 11 but not by 5\n",n);
    }
    else
    {
        printf("%d is not divisible by both 5 and 11\n",n);
    }

}