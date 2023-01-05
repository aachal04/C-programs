#include <stdio.h>
#include<string.h>
int comparefunc(char str1[],char str2[]);
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter First String: ");
    scanf("%s",&str1);
    printf("Enter Second string: ");
    scanf("%s",&str2);

    int out;
    out=comparefunc(str1,str2);

}