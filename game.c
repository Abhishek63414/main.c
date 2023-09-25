#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter your age");
    scanf("%d",&a);
    switch (a)
    {
    case 6:
    printf("you done it correct man");
    break;
    case 4:
    printf("dhyan do");
    break;
    
    default:
    printf("tum se nh ho payega beta");
        break;
    }
    return 0;
}
