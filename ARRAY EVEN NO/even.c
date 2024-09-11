#include <stdio.h>

int main()
{
    int arr[10];

    printf("Enter 10 Array Elements: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("All Even Array Elements are: \n");

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
