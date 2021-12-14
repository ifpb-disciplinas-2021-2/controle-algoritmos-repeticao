#include <stdio.h>
int main(){
    int numero = 190; //aleatório
    // número entre 1 e 100
    while (numero < 1 || numero >100){
        printf("\n Valor não permitido");
        printf("\n Digite um valor: ");
        scanf("%d", &numero);
    }
    return 0; 
}