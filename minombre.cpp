
#include <stdio.h>
#include <stdlib.h>	

//programa que lea y escriba mi nombre

#define EXIT_SUCCESS;
int main(){


    char nombre[256];

      printf("escribe tu nombre: ");
      scanf("%s", nombre);
      printf("%s", nombre);

	return EXIT_SUCCESS;

}
