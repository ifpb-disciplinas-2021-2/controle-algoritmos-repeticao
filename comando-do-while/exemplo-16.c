/*
Escreva um programa em linguagem C que simule um jogo de adivinhação. 
O algoritmo deve calcular um número aleatório (selecionado) e 
ler uma quantidade indefinida de números positivos (informado). 
Ele será finalizado quando os números selecionado e informados
forem iguais ou quando ultrapassar cinco tentativas. 
Por fim, devem ser exibidos: o número selecionado e a quantidade de tentativas
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TENTATIVAS 5
int main(){
    srand(time(NULL));
    int aleatorio = rand() % 100 - 1; //timestamp
    int numero;
    int contador = 0;
    do{
        printf("Digite um número: ");
        scanf("%d", &numero);
        contador++;
    }while(numero !=aleatorio && contador < TENTATIVAS);
    
    if(numero==aleatorio){
        printf("Parabéns você ganhou um ponto na prova!! \n");
    }else{
        printf("Infelizmente não foi desta vez \n");
    }
    printf("Tentativas: %d\n", contador);
    printf("O número aleatório foi: %d \n", aleatorio);
    return 0;
}