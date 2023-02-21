# include<stdio.h>
# include<stdlib.h>

int main()
{
    char str[100];
    int len=0,i=0;
    printf("Enter any string: ");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    printf("The length of string %s is %d",str,len);
    return 0;
}

