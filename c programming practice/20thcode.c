#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");//to check wheather the given number is armstrong or not
    int n, original, temp, digit;
    int digits = 0, sum = 0;
    int power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    // Count number of digits
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    // Find sum of digits raised to 'digits'
    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;

        power = 1;
        i = 1;

        while (i <= digits)
        {
            power = power * digit;
            i++;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}