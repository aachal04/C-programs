#include <stdio.h>

int main()
{
    char str1[80], str2[80];
    int l, i, j;

    printf("Enter the string: ");
    gets(str1);

    printf("Enter search string: ");
    gets(str2);

    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        printf("Search Successful");
    }
    else
    {
        printf("Search Unsuccessful");
    }

    return 0;
}