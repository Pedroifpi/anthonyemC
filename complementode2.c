#include <stdio.h>
#include <string.h>

int main() {

    int opcao, n;

    printf("Quantidade de bits: ");
    scanf("%d", &n);

    printf("\n1 - Decimal para Binario\n");
    printf("2 - Binario para Decimal\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if(opcao == 1) {

        int num;

        printf("Digite o numero decimal: ");
        scanf("%d", &num);

        // Limites do sinal e magnitude
        int max = (1 << (n - 1)) - 1;
        int min = -max;

        if(num > max || num < min) {
            printf("Overflow!\n");
            return 0;
        }

        // Bit de sinal
        if(num < 0) {
            printf("1");
            num = -num;
        }
        else {
            printf("0");
        }

        // Magnitude
        for(int i = n - 2; i >= 0; i--) {
            printf("%d", (num >> i) & 1);
        }

        printf("\n");
    }

    else if(opcao == 2) {

        char bin[100];

        printf("Digite o numero binario: ");
        scanf("%s", bin);

        if(strlen(bin) != n) {
            printf("Quantidade de bits invalida!\n");
            return 0;
        }

        int valor = 0;

        // Converte a magnitude
        for(int i = 1; i < n; i++) {
            valor = valor * 2 + (bin[i] - '0');
        }

        // Verifica o sinal
        if(bin[0] == '1')
            valor = -valor;

        printf("Decimal: %d\n", valor);
    }

    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}