/*assignment was to showcase a student who have passed maths and science their price money*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
char subject ;
printf("enter the subject you have been passed,enter M for maths and S for science and if both enter p ");
scanf("%c",&subject);
if (subject== 'M'|| subject== 'm')
{
    printf("you won 15 rupees congratulation");
}
else if (subject=='s'||subject=='S')
{
    printf("you won 10 rupees congratulation");
}

else if (subject== 'p' || subject== 'P')
{
    printf("your price money worth 45 rupees congratulation");
}

 
    return 0;
}
