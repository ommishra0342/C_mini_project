#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[100];
    int hasDigit = 0, hasUpper = 0;

    printf("Enter your password: ");
    scanf("%s", password);

    if (strlen(password) < 8)
    {
        printf("Password must be at least 8 characters long.\n");
        return 0;
    }

    for (int i = 0; password[i] != '\0'; i++)
    {
        if (isdigit(password[i]))
        {
            hasDigit = 1;
        }
        if (isupper(password[i]))
        {
            hasUpper = 1;
        }
    }

    if (!hasDigit)
    {
        printf("Password must contain at least one digit.\n");
        return 0;
    }

    if (!hasUpper)
    {
        printf("Password must contain at least one uppercase letter.\n");
        return 0;
    }

    printf("Password is strong.\n");
    return 0;
}