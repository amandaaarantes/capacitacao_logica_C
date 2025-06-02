/*
    DESAFIO

    Crie um programa que:
    - peça ao usuário um número inteiro entre 1 e 10
    - salve esse número em uma variável
    - imprima sua tabuada de multiplicação até 10 usando um for
    - não digite nenhum número fixo no printf() da tabuada

    Dica: a ideia é usar o for para repetir um único printf(), 
    alterando seus valores a cada iteração através do uso de
    variáveis de controle como argumento
*/

#include <stdio.h>

int main() {
    // implementação:
    int num, i;

    printf("Digite um número inteiro de 1 a 10: ");
    scanf("%d", &num);

    for(i = 0; i <= 10; i++)
        printf("%d x %d = %d\n", num, i, num*i);
    


    return 0;
}