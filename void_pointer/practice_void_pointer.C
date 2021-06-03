#include <stdio.h>

int main()
{
    int a;
    char ch;
    float f;
    void *ptr;
    
    ptr = &a;
    printf("\nEnter a: ");
    scanf("%d", &a);
    printf("Value of int: %d", *(int*)ptr);
    printf("\nAddress of pointer: %p", ptr);
    
    ptr = &ch;
    printf("\n\nEnter ch: ");
    scanf("%s", &ch);
    printf("Value of char: %c", *(char*)ptr);
    printf("\nAddress of pointer: %p", ptr);
    
    ptr = &f;
    printf("\n\nEnter f: ");
    scanf("%f", &f);
    printf("Value of float: %f", *(float*)ptr);
    printf("\nAddress of pointer: %p", ptr);

    return 0;
}
