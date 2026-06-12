#include <stdio.h>

int palindrome(int n)
{
    int original = n, rev = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return (original == rev);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}