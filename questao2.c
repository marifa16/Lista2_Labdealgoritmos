#include <stdio.h>
#include <ctype.h>

int main() {
    char opcao;

    printf("TABUADA\n\n");

    do {
        int n, m;

        printf("Digite um numero:\n");
        scanf("%d", &n);

        do {
            printf("Digite quantas vezes deseja calcular:\n");
            scanf("%d", &m);

            if (m < 0) {
                printf("Vaçor invalido! O valor deve ser maior que 0. Digite novamente.\n");
            }
        }
        while (m <= 0);
        printf("Tabuada do %d:\n", n);
        for (int i = 0; i <= m; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        printf("Deseja continuar? (S/N)\n");
        scanf(" %c", &opcao);
        opcao = toupper(opcao); 
    }
   while (opcao == 'S');
}