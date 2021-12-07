/*
Escreva um programa em linguagem C que exiba os números de 10 a 1
*/
#include <stdio.h>
int main(){
   //o número que começa em 10, até maior ou igual a 1, faça:
   for(int numero=10; numero>=1; numero = numero -1){
      printf("Número: %d \n", numero);
   }
   return 0;
}