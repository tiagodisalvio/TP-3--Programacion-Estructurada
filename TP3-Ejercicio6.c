#include <stdio.h>
#include <string.h>

// 6. Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir cuántos montos
// superan los $ 40, y del total cobrado, que porcentaje representa la suma de los que superan
// los $40

int main(int argc, char *argv[]) {
	
 int i,a=0,menoracuarenta=0,mayoracuarenta=0,veintea30=0,total=0;
  
 for(i=0;i<6;i++){
  printf("Ingrese valor de multa.\n");
  scanf("%d",&a);
  
  if(a>0&&a<41){
   menoracuarenta++;
   
  }
  if(a>40){
   mayoracuarenta++;
    
  }
 } 
    
 total=(mayoracuarenta*100)/i;
 printf("Porcentaje de mayor a cuarenta de %d: %d porciento\n",i,total);

return 0;
}
