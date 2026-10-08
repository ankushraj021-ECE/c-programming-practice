#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    system("cls");  
    int a,b,c;
    float R,R1,R2;
    printf("Enter the value of a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    float D = b*b - 4*a*c;
    printf("The discriminant is: %.2f\n", D);
    if(D>0)
    {
        printf("roots are real and distinct\n");
        R1 = (-b+sqrt(D))/(2*a);
    R2 = (-b-sqrt(D))/(2*a);
    printf("The roots are: %.2f and %.2f\n", R1,R2);
    }
        else if (D==0)
        {
            printf("roots are real and equal\n");
            R = -b+sqrt(D)/(2*a);
            printf("The root is: %.2f\n", R);
        }

        else
        {
            printf("roots are not real\n");
        }
   return 0 ;
}