/*
    DESAFIO:

    Crie um código que solicite um número N ao usuário
    e calcule a some dos N primeiros números naturais.

    exemplo: se o usuário digitar 5, o programa deve calcular 1 + 2 + 3 + 4 + 5 = 15
    Não utilize recursão, apenas loops.
*/

#include <stdio.h>

int main() {

    int N, i, soma = 0;

    printf("Digite o N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
        soma += i;

    printf("Resultado da soma dos primeiros %d números naturais: %d\n", N, soma);

    return 0;
}