#include <stdio.h>

int main()
{
    int a[50], n1 = 5;
    int b[50], n2 = 5;
    int c[100], n3 = 10;
    int i;
    
    printf("Enter the element of array 'a' ->\n");
    for (i = 0; i<n1; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the element of array 'b' ->\n");
    for (i = 0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }
    
    printf("\n\nCoping array a[] & b[] to array c[] ...\n\n\n");
    
    for (i = 0; i<n3; i++)
    {
        c[i] = a[i];
    }
    
    for (i = 0; i<n3 + 1; i++)
    {
        c[i + n1] = b[i];
    }
    
    printf("Array of c[] \n");
    for (i = 0; i<10; i++)
    {
        printf("\nc[%d] = %d", i, c[i]);
    }
    
    return 0;
}
