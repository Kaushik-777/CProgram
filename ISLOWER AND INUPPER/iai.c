#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is lowercase
    if (islower(ch))
    {
        printf("%c is a lowercase letter.\n", ch);
    }
    // Check if the character is uppercase
    else if (isupper(ch))
    {
        printf("%c is an uppercase letter.\n", ch);
    }
    // If not lowercase or uppercase, it's neither
    else
    {
        printf("%c is neither lowercase nor uppercase letter.\n", ch);
    }

    return 0;
}