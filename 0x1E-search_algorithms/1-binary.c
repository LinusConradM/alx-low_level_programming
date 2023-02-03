#include <stdio.h>

int binary_search(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        printf("Searching in array: ");
        for (int i = low; i <= high; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

