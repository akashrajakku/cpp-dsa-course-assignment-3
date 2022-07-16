#include<stdio.h>
#include<math.h>
int main ()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%7==0)
    printf("number divisible by either 7 or 3 ");
    else if(a%3==0)
    printf("number divisible by either 7 or 3  ");
    else
    printf("number not divisible by either 7 or 3  ");
return 0;
}