#include<stdio.h>

int main()//write the armstrong number between 99 to 1000 
{
    
    int n,o,original,sum;
    printf("Armstrong numbers between 99 and 1000 are:\n");
    for(n=99;n<1000;n++)
    {
        original=n;
        sum=0;
       
        
        while(original!=0)
        {
            
            o=original%10;
            sum=sum+(o*o*o);
            original=original/10;
        }
        if(sum==n)
    {
      printf("%d\n", n);
    }
    }
    return 0;
}
