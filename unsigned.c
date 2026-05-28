
#include <stdio.h>

int main() {

    // Variável para guardar o número
    unsigned int num;

    // Pede o número ao usuário
    printf("Digite um numero: ");
    scanf("%u", &num);

    // Percorre os bits do 7 até o 0
    for(int i = 7; i >= 0; i--) {

        // Move os bits para direita
        // e pega somente o último bit
        printf("%d", (num >> i) & 1);
    }

    return 0;
}