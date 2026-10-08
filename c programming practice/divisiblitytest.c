#include<stdio.h>
#include<stdlib.h>

int main()
{system("cls"); 

    int n,r,x;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%7==0)
    {
        printf("%d is divisible by 7",n);
    }
    else if (r<=3)
    
    {
        r=n%7;
        x=n-r;
        printf("%d is not divisible by 7 and the nearest number divisible by 7 is %d\n",n,x);   
    }
    else
    {
        r=n%7;
        x=n+(7-r);
        printf("%d is not divisible by 7 and the nearest number divisible by 7 is %d\n",n,x);   
    }
    return 0;
}