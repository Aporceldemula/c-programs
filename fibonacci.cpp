
#include <stdlib.h>
#include <stdio.h>

int main(){

  
  int n=1;
  
  int suma[3] = {n,n+suma[0],suma[0]+suma[1]};

for(int i=0;i<3;i++)
printf("%i \n", suma[i]);
}
