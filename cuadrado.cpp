#include <stdlib.h>
#include <stdio.h>
//pintar cda fila de cuadrados,fila,columna,de cuadrados,columna
main(){

    int n;
    printf("escribe las dimensiones del cuadrado");
    scanf("%i", n);

  for (int i=0; i<n; i++){
    for (i=0; i<n; i++){
      printf("*");
    }
    for (int i=0; i<n; i++){
        printf("/n");
    }
    for (int i=0; i<n; i++){
        printf("*");
    }
  }
}
