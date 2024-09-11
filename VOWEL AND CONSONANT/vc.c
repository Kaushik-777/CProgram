#include <stdio.h>

int main()
{
    char ch, lower_case, upper_case;

    printf("Enter any character: ");
    scanf("%c", &ch);

    lower_case = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    upper_case = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lower_case || upper_case)
    {
        printf("%c is a vowel", ch);
    }
    else
    {
        printf("%c is a consonant", ch);
    }
    return 0;
}
