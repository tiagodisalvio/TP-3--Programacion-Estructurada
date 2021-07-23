#include <stdio.h>
#include <string.h>

// 1. Ingresar 25 números, calcular su promedio e imprimirlo

int main(int argc, char *argv[]) {
	
 int i,d=0,a=0;
  
 for(i=0;i<25;i++){
  printf("Ingrese un número.\n");
  scanf("%d",&a);
  d+=a;

 }
 
 d/=i;
 
 printf("El promedio es: %d\n",d);

return 0;
}