#include <stdio.h>

int main()
{
    // sum two numbers
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum %d + %d = %d", a, b, sum);

    return 0;
}
