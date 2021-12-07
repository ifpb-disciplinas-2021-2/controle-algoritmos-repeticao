/*
Escreva um programa em linguagem C que leia 8 números inteiros e exiba o maior valor
lido.

3, 4, 5, 1, 2, 3, 4, 9
-2, -3, -6, -10, -1, -11, -19, -8
*/
#include <stdio.h>
#define TAMANHO 8
int main(){
    int maior;
    int numero;
    printf("Digite um número: ");
    scanf("%d", &maior);
    // maior = numero;
    //contador=contador+1 | contador +=1 | contador++
    for(int contador=2; contador<=TAMANHO; contador++){ 
        printf("Digite um número: ");
        scanf("%d", &numero);
        if(numero > maior){
            maior = numero;
        }
    }
    printf("O maior número foi: %d\n", maior);

    return 0;
}