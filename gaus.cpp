
#include <stdlib.h>
#include <stdio.h>

int main(){

    int lado;
    printf("introduce el lado \n");
    scanf("%i", &lado);

    for(int i=0; i<(lado*(lado+1))/2; i++){
      printf("*");
    }
    printf("\n");
}
