#include <stdio.h>

int main()
{
    double hours, minutes, result, BigNum, result1, result2;
    int h, m;
    printf("Enter a Hours: ");
    scanf("%d", &h);

    printf("Enter a Minutes: ");
    scanf("%d", &m);

    hours = 30 * h;
    minutes = (11.0 / 2.0) * m;

    result = hours - minutes;

    // if the value is greater than 180
    if (result >= 180)
    {
        BigNum = 360 - result;
        result1 = 360 - BigNum;
        printf("The Angle %2.lf of %2.lf is: %2.lf Degree", hours, result1, BigNum);
    }
    else
    {
        // if the value is negative
        result2 = hours - minutes;
        printf("The Angle %2.lf of %2.lf is: %2.lf Degree", hours, minutes, result2);
    }

    return 0;
} 
