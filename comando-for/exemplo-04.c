/*
Escreva um programa em linguagem C que exiba o quadrado dos números ímpares 
contidos no intervalo de 1 a 10
*/
#include <stdio.h>
int main(){
   //números ímpares contidos no intervalo de 1 a 20
   for(int numero = 1; numero <=20; numero=numero+2){
         int quadrado = numero * numero; //calculando o quadrado
         printf("Numero: %d Quadrado: %d\n",numero, quadrado); //imprimindo o quadrado   
   }
   //números ímpares contidos no intervalo de 1 a 10
   //   for(int numero=1; numero<=10; numero = numero+1){
   //      //exiba o quadrado dos números ímpares (ímpar quando o resto da divisão é igual a 1)
   //      if(numero % 2 !=0){ //ímpares
   //         int quadrado = numero * numero; //calculando o quadrado
   //         printf("%d ", quadrado); //imprimindo o quadrado
   //      }
   //   }
   return 0;
}