/*
Escreva um programa em linguagem C que incremente e escreva 
o valor de uma única variável (iniciada com o valor 1) até 
que o usuário digite o valor zero
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero); //3
    // controle lógico (número ser diferente de zero)
    while(numero!=0){
        //imprima o numero enquanto ele for diferente de zero
        printf("%d \n", numero);
        printf("Digite um número: ");
        scanf("%d", &numero); 
    }
   return 0;
}