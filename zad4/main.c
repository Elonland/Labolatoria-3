#include <stdio.h>
#include "agents.h"

int main(void)
{

struct agent Elon = newagent(0, 0);
struct agent Albert = newagent(2, 4);
north(&Elon);
north(&Elon);
west(&Elon);
west(&Elon);
south(&Elon);  //(-2,1)
south(&Albert);
south(&Albert);
east(&Albert);
north(&Albert);  //(3,3)
printf("Odległość = %f\n",distance(Elon, Albert));

return 0;
}
