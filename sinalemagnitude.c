#include <stdio.h>

int main() {

    // Variável do número
    int num;

    // Entrada do usuário
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Verifica se é negativo
    if(num < 0) {

        // Mostra bit de sinal 1
        printf("1");

        // Transforma em positivo
        num = -num;
    }
    else {

        // Se for positivo
        // imprime sinal 0
        printf("0");
    }

    // Mostra os outros 7 bits
    for(int i = 6; i >= 0; i--) {

        // Imprime bit por bit
        printf("%d", (num >> i) & 1);
    }

    return 0;
}
