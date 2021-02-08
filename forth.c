#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
float x, k, s, y;
int n,i,l;
printf("Vvedite x");  scanf("%f", &x); 
s = x / (x + 5);
k = 1;
y = 0;
printf("Vvedite verhniy predel");  scanf("%d", & n);

while (1)
{
printf("Make a choice : \n(1)For \n(2)While \n(3)Program exit \n");  scanf("%d", &l);

switch (l)
{
case 1:
for (i = 1; i <= n; i++) {
y = y + 1 + 2 * (pow(s, k) * cos(k * x));
++k;
}
printf("%f", y);
break;

case 2:
	while (i <= n){
	  y = y + 1 + 2 * (pow(s, k) * cos(k * x));
      ++k;
      ++i;
}
      printf("%f", y);
      break;
case 3: 
 printf("Do you know ho Marselles Walles is? English motherfucker do you speak it?! \n");
 return 0;
 break;

default: printf("Am I joke to you? \n");
break;
}}}	
