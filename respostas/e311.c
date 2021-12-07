/*
Escreva um programa em linguagem C que leia um número inteiro positivo e não-nulo,
calcule e exiba o valor de H, conforme a seguinte equação. Onde, n representa o n-ésimo termo da função.
    
    H=1/1+1/2+1/3...+1/n 

    Entrada, Saída
    n=1,     1.000
    n=2,     1.500
    n=3,     1.833
*/
#include <stdio.h>
int main(){
    int n;
    float H; //0.6
    printf("Digite o n-ésimo termo: ");
    scanf("%d", &n);
    for(int contador = 1; contador<=n; contador++){
        // H = H + (float) 1/contador; //   1/2 = 0 -> float 1.5 (cast de int para float)
        H +=  (float) 1/contador; //   1/2 = 0 -> float 1.5 (cast de int para float)
    }
    printf("H= %.3f \n", H);
    return 0;
}