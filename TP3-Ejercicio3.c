#include <stdio.h>
#include <string.h>

// 3. Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros.

int main(int argc, char *argv[]) {
	
 int i,a=0;
  
 for(i=0;i<10;i++){
  printf("Ingrese un número.\n");
  scanf("%d",&a);
  if(a>0){
   printf("Es mayor que 0. %d\n",a);
  }
  if(a<0){
   printf("Es menor que 0. %d\n",a);
  }
  if(a==0){
   printf("Es igual a 0. %d\n",a);
  }
 }
  
return 0;
}
