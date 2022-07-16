
#include <stdio.h>

int main ()
{
  int a;
  printf ("Enter a number:");
  scanf ("%d", &a);
  if (a>99&&a<=999)
    printf ("Three digit number");
  else
    printf ("Not a three digit number"); 
    return 0;
}
