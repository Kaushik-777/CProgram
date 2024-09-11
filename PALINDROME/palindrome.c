#include <stdio.h>

int main()
{
    int n, rem, reverse = 0, original;

    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if (original == reverse)
    {
        printf("%d is a palindrome number.", original);
    }
    else
    {
        printf("%d is not a palindrome number", original);
    }
    return 0;
}
