/*
    A expressão A != B inverte o valor binário de b e salva em a.
    Inicialize a variável B com um valor de modo que A resulte em 1.
    Execute o programa para testar.
*/

#include <stdio.h>

int main() {
    int a = 0;
    int b;

    // Inicialize b com um valor:
    b = 0;

    // Validação

    a != b; // não funciona ?????

    if(b == 0)
        a = 1;
    else if( b == 1)
        a = 0;

        
    if ( a == 1 ) printf("O valor de a é 1, muito bem!!\n");
    else printf("O valor de a é %d, verifique seu código!\n", a);
    return 0;
}