
#include <stdio.h>
int main()
{
    int i;
    int j;
    int k;
    
    for(i = 1; i <= 5; i++)
    {
        for(k = 5; k >= i; k--)
        {
            printf("\t");
        }
        for(j = 1; j <= i; j++)
        {
            printf("%d\t\t", j);
        }
        printf("\n");
    }
    
    for(i = 4; i >= 1; i--)
    {
        for(k = 5; k >= i; k--)
        {
            printf("\t");
        }
        for(j = 1; j <= i; j++)
        {
            printf("%d\t\t", j);
        }
        printf("\n");
    }
    
    return 0;
}
