/*
Escreva um programa em linguagem C que incremente e 
imprima o valor de uma única variável (iniciada com o valor 1) 
até que a variável atingir o valor 5
*/
#include <stdio.h>
int main(){
   // começando em 1, até que chegue em 5, faça:
   for(int contador=1; contador <= 5; contador = contador + 1){
      // imprimir o número
      printf("Contador: %d \n", contador); 
   }
   return 0;
}