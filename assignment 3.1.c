
#include <stdio.h>

int main ()
{
  int a;
  printf ("Enter a number:");
  scanf ("%d", &a);
  if (a > 0)
    printf ("Positive");
  else
    printf ("non-positive"); 
    return 0;
}
