#include <stdio.h>

int main()
{

    int arr[] = {5, 12, 7, 8, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest;

    largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("The largest number in the array is: %d", largest);
    return 0;
}