#include<stdio.h>
#include<math.h>
int main ()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%6==0)
    printf("number divisible by both 2 and 3 ");
    else
    printf("number not divisible by both 2 and 3 ");
    return 0;
}