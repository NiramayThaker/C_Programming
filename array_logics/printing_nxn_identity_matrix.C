#include <stdio.h>

int main()
{
    int r_1, c_1;
    int arr[100];
    
    printf("Enter number of rows -> ");
    scanf("%d", &r_1);
    printf("Enter number of column -> ");
    scanf("%d", &c_1);
    
    for (int i=0; i<r_1; i++)
    {
        for(int j=0; j<c_1; j++)
        {
            if(i==j)
                printf("1\t");
            else
                printf("0\t");
        }
        printf("\n");
    }
    
    return 0;
}
