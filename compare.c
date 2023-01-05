#include<stdio.h>
#include<string.h>
int comparefunc(char str1[],char str2[]){
    int a;
    a = strcmp(str1,str2);
    if(a==0)
    {
        printf("0");
    }
    else
    {
        printf("-1");
    }
}