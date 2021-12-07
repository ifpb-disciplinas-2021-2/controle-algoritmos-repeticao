/*
Escreva um programa em linguagem C que incremente e 
imprima o valor de uma única variável (iniciada com o valor 1) 
até que a variável atingir o valor 5
*/
#include <stdio.h>
int main(){
   int numero = 1;
   printf("%d \n", numero); // imprime 1
   numero++; // numero = numero + 1
   printf("%d \n", numero); // imprime 2
   numero++;
   printf("%d \n", numero); // imprime 3
   numero++;
   printf("%d \n", numero); // imprime 4
   numero++;
   printf("%d \n", numero); // imprime 5
   return 0;
}