/*
Escreva um programa em linguagem C que exiba os números de 1 a 10
*/
#include <stdio.h>
int main(){
   //o número que começa em 1, até menor ou igual a 10, faça:
   for(int numero =1; numero <= 10; numero = numero+1){
      printf("Número: %d \n", numero);
   }
   return 0;
}