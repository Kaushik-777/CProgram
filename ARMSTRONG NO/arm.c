#include <stdio.h>

int main()
{
    int n, rem, result = 0, original;

    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0)
    {
        rem = n % 10;
        result = rem * rem * rem + result; // result += rem * rem * rem
        n = n / 10;                        // n /= 10
    }

    if (original == result)
    {
        printf("%d is an Armstrong number.", original);
    }
    else
    {
        printf("%d is not an Armstrong number", original);
    }
    return 0;
}
