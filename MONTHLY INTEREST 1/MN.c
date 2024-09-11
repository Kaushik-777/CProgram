#include <stdio.h>

int main()
{
    double principal, annualRate, monthlyRate, yearly;

    // Get the principal amount from the user
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &annualRate);

    yearly = principal * annualRate / 100;

    monthlyRate = yearly / 12;

    printf("The interest of months is: %.2lf\n", monthlyRate);

    return 0;
}