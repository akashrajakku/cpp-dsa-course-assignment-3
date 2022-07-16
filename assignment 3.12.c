#include<stdio.h>
#include<math.h>
int main ()
{
    char ch;
   
    
    printf("enter a character:");
    scanf("%c",&ch);
    
    
    if(ch>='A' && ch<='Z')
    printf("Uppercase");
    if(ch>='a' && ch<='z')
    printf("Lowercase");
   
    
    
    
    return 0;
}