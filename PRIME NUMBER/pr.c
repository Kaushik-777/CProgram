#include <stdio.h>

int main()
{
    int n, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            flag++;
        }
    }

    if (flag == 2)
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }

    return 0;
}
