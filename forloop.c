#include<stdio.h>
int main(int argc, char const *argv[])
{ int i, j;
    printf("hello world");
    for ( i = 0, j=0; i < 5; i++)
    {
        printf("%d+%d",i,j);
    }
    
    return 0;
}