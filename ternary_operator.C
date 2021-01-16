# Basic Use of ternary operator

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age >> ");
    scanf("%d", &age);
    (age>=18)?printf("Valid age"):printf("invalid age");
    return 0;
}
