#include "deklaracje.h"
#include <stdio.h>

int main(void)
{
double a,b,e;
printf("Podaj zakersy przedzialu <a,b>\na: ");
scanf("%lf",&a);
printf("\nb: ");
scanf("%lf",&b);
printf("\nPodaj dokładność obliczenia: ");
scanf("%lf",&e);
printf("\nMiejscem zerowym tej funkcji jest: %lf", wynik(a,b,e));

return 0;
}


