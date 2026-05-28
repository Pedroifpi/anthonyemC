#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    // Verifica se o número é negativo
    if(num < 0) {

        printf("Erro: numero negativo nao permitido.");

        return 0;
    }

    // Mostra o número em binário
    for(int i = 7; i >= 0; i--) {

        printf("%d", (num >> i) & 1);
    }

    return 0;
}