#include <stdio.h>

int main()
{
    int num, multi = 0, first_digit, last_digit;
    
    printf("Enter any number to find Multiplication of first and last digit : ");
    scanf("%d", &num);
    
    last_digit = num % 10;
    first_digit = num;

    while(num >= 10)
    {
        num = num / 10;
    }
    first_digit = num;

    multi = first_digit * last_digit; 

    printf("Multiplication of first and last digit = %d", multi);

    return 0;
}
