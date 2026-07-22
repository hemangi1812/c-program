#include <stdio.h>

int main()
{
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
//find min value in array

    int min = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        // find reverse array
    }
     printf("Reverse Array:\n");

    for(int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\nMinimum = %d", min);

    return 0;
}