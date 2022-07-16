#include <stdio.h>
#include<math.h>

 int
main () 
{
  
 
float a, b, c, D;
  
 
printf ("Enter 'a'(coefficient of x^2):");
  
 
scanf ("%f", &a);
  
 
printf ("\nEnter 'b'(coefficient of x):");
  
 
scanf ("%f", &b);
  
 
printf ("\nEnter 'c'(constant of equation):");
  
 
scanf ("%f", &c);
  
 
D = (b * b) - (4 * a * c);
  
 
 
if (D > 0)
    
 
printf ("Roots are 'Real and distinct'. ");
  
 
  else if (D == 0)
    
 
printf ("Roots are 'Real and equal'. ");
  
 
  else if (D < 0)
    
 
printf ("Roots are 'Imaginary'. ");
  
 
return 0;

 
}


