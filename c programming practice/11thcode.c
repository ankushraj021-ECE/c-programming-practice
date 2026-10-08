#include<stdio.h>
#include<stdlib.h>
int main()//smallest of three numbers
{
    system("cls");
    int a,b,c;
    printf("enter the three numbers you want to compare:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {printf("%d is the smallest number\n",a);}
    else if(b<a && b<c)
    {printf("%d is the smallest number\n",b);}
    else
    {printf("%d is the smallest number\n",c);}
}