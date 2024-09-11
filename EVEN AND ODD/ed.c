#include <stdio.h>

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is an Even number.", n);
    }
    else
    {
        printf("%d is a Odd number.", n);
    }
    return 0;
}
