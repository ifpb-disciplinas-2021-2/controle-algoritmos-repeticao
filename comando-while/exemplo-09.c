// O que esse algoritmo faz?
#include <stdio.h>
int main(){
  int numero, contador=1;
  while (numero==contador){
     printf("Digite um número: ");
     scanf("%i", &numero);
  }
  printf("Valor de número: %d\n", numero); //memoria
  return 0; 
}