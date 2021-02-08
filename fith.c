#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
        float y,x,s1,s2;
        int i,n,j,k,m;

        printf("Vvedite 'm'\n");
        scanf("%i",&m);
        printf("Vvedite 'n'\n");
        scanf("%i",&n);
        printf("Vvedite 'x'\n");
        scanf("%f",&x);

        y=0;
        s1=0;
        s2=0;

        for (j=1;j<=m;j++){
            s2=s2+pow((2+j),1./2.);
        }

        for (i=1;i<=n;i++){
            for (k=1;k<=m;k++){
            s1=s1+pow((k+i),2);
            }
            y=y+(3*x+s1)/(4*x+s2);
        }
        printf("Vivod 'y': %10.3f",y);
}
