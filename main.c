#include<stdio.h>
int main(int argc, char const *argv[])
{
int a;
printf("enter the number yoou want  the table of");
scanf("%d",&a);
for (int i = 0; i < 10; i++)
{
    printf("%d x%d = %d\n",a,(i+1),(i+1)*a);
}
printf("here is your table man");
    return 0;
}
