#include<stdio.h>
#include<stdlib.h>
int main()//making traingle pattern
{
    system("cls");
    int n ,i,j ;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=0 ; i<n ;i++ )
    {
        for(j=0 ;j<=i ;j++ )
        {
            printf("%d",j+1);
             
        }
        printf("\n");
    }
}