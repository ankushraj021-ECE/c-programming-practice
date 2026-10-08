#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()//tetration of given number
{
    system("cls");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int result = pow(n,n);
    printf("The tetration of %d is: %d\n", n, result);
    return 0;
}
