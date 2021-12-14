#include <stdio.h>
int main(){
    int numero = 19; //aleatório
    while (numero <= 0 || numero % 2 != 0){ // número é positivo e par
        printf("\n Valor não permitido");
        printf("\n Digite um valor: ");
        scanf("%d", &numero);
    }

    return 0; 
}