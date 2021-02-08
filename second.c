#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float x,y;
    y = 0.;
    printf("Vvedite x\n");
    scanf("%f", &x);

    if (x < -14)

                y = x * abs(x + 21);
    else if (x < -5)

                    y = pow(x, 2) * logf(abs(pow(x, 2) + 48));
         else if (x < 0)

                        y = x/3 + sqrt(pow(x, 2) + 16);
              else
                  y = 2 + x/3;

    printf("y=%5.5f\n", y);
    return 0;
}
