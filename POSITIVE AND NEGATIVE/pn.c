#include <stdio.h>

int main()
{

    double n;

    printf("Enter a number: ");
    scanf("%lf", &n);

    if (n <= 0)
    {
        if (n == 0.0)
        {
            printf("You entered 0");
        }
        else
        {
            printf("%.2lf is a negative number.", n);
        }
    }
    else
    {
        printf("%.2lf is a positive number.", n);
    }

    return 0;
}
