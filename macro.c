#include <stdio.h>
#define pi 3.14
#define circlearea(r) (pi*r*r)
int main(){
int rad = 3;
printf("Area : %f",circlearea(rad));
printf("\nDate : %s",__DATE__);
printf("\nTime : %s",__TIME__);
printf("\nLine : %d\n",__LINE__);
return 0;
}
