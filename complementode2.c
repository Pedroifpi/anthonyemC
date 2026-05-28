
#include <stdio.h>

int main() {

    // Variável do número
    int num;

    // Entrada do usuário
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Percorre os 8 bits
    for(int i = 7; i >= 0; i--) {

        // Move os bits para direita
        // e pega apenas o último bit
        printf("%d", (num >> i) & 1);
    }

    return 0;
}