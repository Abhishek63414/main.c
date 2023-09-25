#include<stdio.h>
int main(int argc, char const *argv[])
{
    char country;
    printf("enter I if you are indian and f if from france");
    scanf(" %c",&country);
    if (country=='i' || country=='I')
    {
        printf("namstey");
    }
   else if (country=='F' ||country=='f')
   {
    printf("bonjour");
   }
   
    return 0;
}
 