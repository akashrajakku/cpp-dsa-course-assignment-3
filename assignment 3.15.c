#include<stdio.h>
#include<math.h>
int main ()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a>0)
    printf("positive");
    else if(a==0)
    printf("zero");
    else
    printf("negative ");
return 0;
}