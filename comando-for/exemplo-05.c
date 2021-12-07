/*
Escreva um programa em linguagem C que leia um número e exiba a sua tabuada
    2x1=2
    ..
    2x9 =18
    2x10=20
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    //começa em 1, até 10
    for(int contador=1; contador<=10; contador = contador+1){
        int multiplicacao = numero * contador;
        printf("%d x %d = %d \n", numero, contador, multiplicacao);
    }
    return 0;
}