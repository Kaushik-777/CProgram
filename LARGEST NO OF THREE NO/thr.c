#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("%d is a largest number.", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is a largest number.", b);
    }
    else if (c >= a && c >= b)
    {
        printf("%d is a largest number.", c);
    }

    return 0;
}