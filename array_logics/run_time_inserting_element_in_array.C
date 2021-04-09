#include <stdio.h>

int main()
{
	int arr[100];
	int i, new_element, pos, n = 10;

    printf("\nEnter the element of array -> \n");
    for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

    printf("\nOld Array :- ");
	for (i = 0; i < 10; i++)
		printf("\na[%d] -> {  %d  }", i, arr[i]);

    printf("\nEnter new element you want to insert -> ");
    scanf("%d", &new_element);
    printf("Enter new element positoin you want to insert -> ");
    scanf("%d", &pos);

	n++;
	for (i = n-1; i >= pos; i--)
		arr[i] = arr[i - 1];
	arr[pos - 1] = new_element;

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
