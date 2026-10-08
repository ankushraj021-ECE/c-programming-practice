#include<stdio.h>
#include<stdlib.h>
int main()//check for vowel or consonent
{
    system("cls");
    char ch;
    printf("Enter a charcacter:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c is a vowel\n",ch);
    }
    else
    {
        printf("%c is a consonent\n",ch);
    }
}