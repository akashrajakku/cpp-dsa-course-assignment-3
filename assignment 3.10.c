#include<stdio.h>
#include<math.h>
int main ()
{
    float sp,cp,profit,loss;
    printf("Enter cost price:");
    scanf("%f",&cp);
    printf("\nEnter selling price:");
    scanf("%f",&sp);
    profit=sp-cp;
    loss=cp-sp;
    if(sp>=cp)
    printf("profit percent is %.2f",(profit/cp)*100);
    else
    printf("loss percent is %.2f",(loss/cp)*100);
    
    
    return 0;
}