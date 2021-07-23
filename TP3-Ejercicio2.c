#include <stdio.h>
#include <string.h>

// 2. Ingresar 20 notas y nombres de alumnos, indicar e imprimir los aplazados ( menos de 4) y el nombre a quien pertenece esa nota.

int main(int argc, char *argv[]) {
	
 int i,d=0,a=0;
  
 for(i=0;i<20;i++){
  printf("Ingrese una nota.\n");
  scanf("%d",&a);
  if(a<4){
   printf("Está aplazado. Nota: %d\n",a);
  }
 }
  
return 0;
}