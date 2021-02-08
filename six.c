#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    float summa1(int j1, int n1, float c1)
    {
        int i;
        float s1;
        s1=0;
        i=0;


        for (i=j1;i<=n1;i++)
            s1=s1+3*pow(i,3)+pow(i,2)+c1;
        return s1;
    }


    float summa2(int j2, int m2)
    {
        int i;
        float s2;
        s2=0;
        i=0;

      
      for (i=j2;i<=m2;i++)
            s2=s2+2*pow(i,2)+3;
        return s2;
    }


int main()
{
        float y,a,c;
        int j,n,k,m;
        y=0;


        printf("Dratuti, peremennuyu 'a' vvedite, milsdar\n");
        scanf("%f",&a);


        printf("A takje 'j'\n");
        scanf("%i",&j);
        printf("A takje 'n'\n");
        scanf("%i",&n);
        printf("A takje 'c'\n");
        scanf("%f",&c);
        printf("Nu i dlya vtoroy uj davayte\n\n");
        printf("Vvedite 'j2'\n");
        scanf("%i",&k);
        printf("A takje 'm'\n");
        scanf("%i",&m);

        printf("Vnimanie, seychas budet focus\n\n");


        y=(5+summa1(j,n,c))/(a+2*summa2(k,m));


        printf("Resultat v studiu!!!\n!!!%f!!!\n\n",y);
        return 0;
}
