#include "deklaracje.h"
#include <math.h>
#include <stdio.h>

double wynik(double a, double b, double eps)
{
  
  double x = b; // miejsce zerowe
  double x1 = a; //przyblizenie
    while(fabs(x - x1) >= eps)
    {
      if(f((x1+x)/2 > 0))
        x = (x1+x)/2;
      else
	x1 = (x1+x)/2;
    }
    if(fabs(f(x)) > fabs(f(x1)))
      return x1;
    else
      return x;
 
  
}
