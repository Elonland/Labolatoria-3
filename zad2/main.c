#include "deklaracje.h"
#include <stdio.h>

int main(void)
{
double a,b,e;
printf("Podaj zakersy przedzialu <a,b>\na: ");
scanf("%lf",&a);
printf("b: ");
scanf("%lf",&b);

if(f(a) * f(b) > 0 || a == b)
return 0;

printf("Podaj dokładność obliczenia: ");
scanf("%lf",&e);
printf("Miejscem zerowym tej funkcji jest: %lf\n", wynik(a,b,e));

return 0;
}
