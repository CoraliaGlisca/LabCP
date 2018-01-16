#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter your first and last name:\n");

    gets(str);

    printf("\nYour name with all uppercase characters: %s ", strupr(str));
    printf("\nYour name with all lowercase characters: %s ", strlwr(str));

    getch();
    return 0;
}
