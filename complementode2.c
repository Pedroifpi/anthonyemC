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

        int max = (1 << (n - 1)) - 1;
        int min = -(1 << (n - 1));

        if(num > max || num < min) {
            printf("Overflow!\n");
            return 0;
        }

        unsigned int bin = num & ((1 << n) - 1);

        for(int i = n - 1; i >= 0; i--) {
            printf("%d", (bin >> i) & 1);
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

        for(int i = 0; i < n; i++) {
            valor = valor * 2 + (bin[i] - '0');
        }

        if(bin[0] == '1') {
            valor -= (1 << n);
        }

        printf("Decimal: %d\n", valor);
    }

    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}