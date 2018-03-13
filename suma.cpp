#include <stdio.h>
#include <stdlib.h>

double sum1;
double sum2;


double suma(double sum1, double sum2){

    double static res=sum1+sum2;
    return res;
};
int main(){

    printf("introduce el primer numero");
    scanf("%lf",sum1);
   printf("introduce el segundo numero");
     scanf("%lf",sum2);


  suma (double sum1, double sum2);
  return EXIT_SUCCESS;
}
