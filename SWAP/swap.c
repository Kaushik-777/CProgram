#include <stdio.h>

int main()
{

    int first, second, third;

    printf("Enter a first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    third = first;
    first = second;
    second = third;

    printf("After Swapping first number is: %d\n", first);
    printf("After Swapping second number is: %d", second);

    return 0;
}
