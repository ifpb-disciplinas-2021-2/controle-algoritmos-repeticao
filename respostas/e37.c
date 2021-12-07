/*
Escreva um programa em linguagem C que leia 5 números reais, verifique e exiba quantos
dos números lidos são maiores que 10.
*/
#include <stdio.h>
int main(){
    int numeroMaiores = 0;
    for(int contador=1; contador<=5; contador=contador+1){
        float numero; // reais: float ou double
        printf("Digite um número: ");
        scanf("%f", &numero);
        if(numero > 10){
            numeroMaiores = numeroMaiores+1;
            // printf("Número maior que 10\n");
        }
    }
    printf("Foram encontrados %d números maiores que 10\n", numeroMaiores);
    return 0;
}