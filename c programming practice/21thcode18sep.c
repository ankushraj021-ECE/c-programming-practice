#include<stdio.h>
#include<stdlib.h>
int main()//write the table till the given number
{
    system("cls");
    int n;
    printf("enter the number you want to print the table till the number:");
    scanf("%d",&n);
    for(int x=1;x<=n; x++)
    {
    for(int i=1;i<=10;)
    {
        printf("%d x %d = %d\n",x,i,x*i);
        i++;
    }
}
}