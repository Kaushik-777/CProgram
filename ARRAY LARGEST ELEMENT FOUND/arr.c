#include <stdio.h>

int main()
{

    int n, largest;

    printf("Enter the no. of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("The largest number in the array is:  %d", largest);
    return 0;
}