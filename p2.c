<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int x = n & (n-1);
    int count = 1;
    while(x!=0)
    {
        x= x & (x-1);
        count++;
        
    }
    printf("Count of 1's = %d", count);
    return 0;
}
=======
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int x = n & (n-1);
    int count = 1;
    while(x!=0)
    {
        x= x & (x-1);
        count++;
        
    }
    printf("Count of 1's = %d", count);
    return 0;
}
>>>>>>> cbca211e14a5851af2492351dc790b522e16d013
