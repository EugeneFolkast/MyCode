#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
     float p,x,y,b,z,a;  
					
    printf("x=");
    scanf("%f",&x);
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);

    y = sqrt(x + 12) / (2 * pow(x,3) + 1);
    p = abs(pow(y,2) - a);
    z = (p + 6)/(2 * cos(b)+ p + 6);

    printf("y=%10.5f z=%10.5f",y,z);
    return 0;
}
