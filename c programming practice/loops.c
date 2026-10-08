#include<stdio.h>
#include<stdlib.h>
int main()
{  
system("cls");
    int n,r,digit;
    r=0;
    printf("Enter a number: ");
    scanf("%d",&n); 

    while(n!=0)
    {
        digit = n%10;
        r=r*10+digit;
        n=n/10;
    
    }
      printf("The reverse of the number is: %d\n",r);               
    return 0;
}
