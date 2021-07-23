#include <stdio.h>
#include <string.h>

// 4. Ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio de lo valores pares 
// y el promedio de los valores impares. Luego mostrar por pantalla cuantos números superaron el valor 15.

int main(int argc, char *argv[]) {
	
 int i,d=0,a=0,m=0,pares=0,impares=0,parescontador=0,imparescontador=0;
  
 for(i=0;i<8;i++){
  printf("Ingrese un número.\n");
  scanf("%d",&a);
  d+=a;

  m=a%2;
  
  if(m==0){
   pares+=a;
   parescontador++;
  }
  if(m==1){
   impares+=a;
   imparescontador++;
  }
  if(a>15){
   printf("El número supera 15 %d\n",a);
  }
 }
 d/=i;
 printf("Promedio general %d\n",d);
 
 pares/=parescontador;
 printf("Promedio pares %d\n",pares);

 impares/=imparescontador;
 printf("Promedio impares %d\n",impares);

return 0;
}
