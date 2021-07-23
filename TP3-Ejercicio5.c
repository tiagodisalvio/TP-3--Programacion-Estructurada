#include <stdio.h>
#include <string.h>

// 5. Ingresar 30 valores.Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, cuantos entre
// 20 y 30 y cuantos son mas de 30. Luego mostrar el porcentaje de cada grupo en el total. 

int main(int argc, char *argv[]) {
	
 int i,a=0,unoa10=0,oncea20=0,veintea30=0,total=0;
  
 for(i=0;i<30;i++){
  printf("Ingrese un número.\n");
  scanf("%d",&a);
  
  if(a>0&&a<11){
   unoa10++;
   
  }
  if(a>10&&a<21){
   oncea20++;
   
  }
  if(a>20&&a<31){
   veintea30++;
   
  }

 } 
    
  

 printf("unoa10 : %d\n",unoa10);
 printf("i vale : %d\n",i);
 
 total=(unoa10*100)/i;
 printf("Porcentaje de 1 a 10: %d\n",total);
 
 total=(oncea20*100)/i;
 printf("Porcentaje de 11 a 20: %d\n",total);

 total=(veintea30*100)/i;
 printf("Porcentaje de 21 a 30: %d\n",total);

 

return 0;
}
