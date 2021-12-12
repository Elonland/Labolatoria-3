#include "deklaracje.h"
#include <math.h>
#include <stdio.h>

double wynik(double a, double b, double eps)
{
  if(a > b)
  {
  a = a + b;
  b = a - b;
  a = a - b;
  }

  double x = b;  
  double x1 = a;
    while(fabs(x - x1) > eps)
    {
      if(f((x1+x)/2) > 0)
        x = (x1+x)/2;
      else
	x1 = (x1+x)/2;
    }
    if(fabs(f(x)) > fabs(f(x1)))
      return x1;
    else
      return x;

}
