 #include <stdio.h>
 
void main()
{
    int i, j, a, n, number[30];
    
    printf("Enter the size of array -> ");
    scanf("%d", &n);

    printf("Enter element of array ->\n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);

    printf("Arranging in ascending order ...");

    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j]) 
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    
    printf("The numbers arranged in ascending order :- \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
}
