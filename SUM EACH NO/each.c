#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of each no is: %d", sum);
    return 0;
}
