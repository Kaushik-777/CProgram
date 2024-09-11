#include <stdio.h>

int main()
{
    double principal, annualRate, monthlyRate, interest;
    int months;

    // Get the principal amount from the user
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    // Get the annual interest rate from the user
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &annualRate);

    // Get the number of months from the user
    printf("Enter the number of months: ");
    scanf("%d", &months);

    // Convert annual interest rate to a monthly interest rate
    monthlyRate = annualRate / 12 / 100;

    // Calculate the interest
    interest = principal * monthlyRate * months;

    // Output the interest
    printf("The interest for %d months is: %.2lf\n", months, interest);

    return 0;
}