

#include <stdio.h>
#include <stdlib.h>	

#define x 0
#define y 1
#define z 2


double vertice[3]= {8, -6, 4};

int main(){

 printf("%.2lf, %.2lf, %.2lf \n", vertice[x], vertice[y], vertice[z]);
 printf("%.2lf, %.2lf", vertice[y]/vertice[z], vertice[x]/vertice[z]);

	return EXIT_SUCCESS;

}
