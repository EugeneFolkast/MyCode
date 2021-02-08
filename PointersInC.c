#include <stdio.h>

double f(double x);

double minF( double start, double end, double step ,double (*fun) (double)) {
    double x,y, ymin, ymax;
    ymin = fun(start);
    ymax = fun(end);
    float k = 0.0;

    for(x = start; x<=end; x+=step) {
        y = f(x);
        if(y<ymin) {
            ymin = y;
        }
        if(y>ymax){
            ymax = y;
        }
        k++;
    }
    float result = (ymax-ymin)/(k);
    return result;
}

double f(double x) {
    return 2+12-(543*3)+x;
}
double f1(double x) {
    return 2*x;
}
double f2(double x) {
    return 2*x*x;
}
int main(int argc, char **argv) {
    int a=0, b=0;
    int step=0;
    printf("\nvvedite min\n");
    scanf("%d", &a);
    printf("\nvvedite max\n");
    scanf("%d", &b);
    printf("\nvvedite shag\n");
    scanf("%f", &step);

    float (*fun01) (float) = f;
    float (*fun02) (float) = f1;
    float (*fun03) (float) = f2;

    double res = minF( a, b, step, fun01);
    double res1 = minF( a, b, step, fun02);
    double res2 = minF( a, b, step, fun03);

    printf("\n%f\n",res);
    printf("\n%f\n",res1);
    printf("\n%f\n",res2);


}
