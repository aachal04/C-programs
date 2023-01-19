# include<stdio.h>
# include<stdlib.h>

int invert(const int,int,int);
int main(int argc,int **argv)
{
    int *i=(int*)malloc(sizeof (int));
    int *p=(int*)malloc(sizeof(int));
    int *n=(int*)malloc(sizeof(int));
    
    scanf("%d",i);
    scanf("%d",p);
    scanf("%d",n);
    
    printf("The inverted integer is:\t%d\n",invert(*i,*p,*n));
    
    free(i);
    free(p);
    free(n);
    
    return 0;
}


int invert(const int i,int p,int n)
{
    int mask= ~(~0 << n)<<p;
    return i^mask;
}