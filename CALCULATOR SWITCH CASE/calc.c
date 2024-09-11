#include <stdio.h>

int main()
{
    char ch;
    double a, b;

    printf("Enter an operator(+, -, *, /): ");
    scanf("%c", &ch);

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    switch (ch)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf", a, b, a - b);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf", a, b, a * b);
        break;

    case '/':
        printf("%.1lf / %.1lf = %.1lf", a, b, a / b);
        break;

    default:
        printf("Error! Operatoe is not correct");
    }
    return 0;
}
