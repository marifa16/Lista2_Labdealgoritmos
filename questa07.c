#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    printf("Transformar Celsius, Fahrenheit e Kelvin \n\n");

    float c, f, k;
    char opcao;
    char r[20];

    do {
        printf("Sua temperatura eh em Celsius(C), Fahrenheit(F) ou Kelvin(K)?\n");
        scanf(" %c", &opcao);

        while (getchar() != '\n'); // limpa o buffer de entrada

        opcao = toupper(opcao);

        while (opcao != 'C' && opcao != 'F' && opcao != 'K') {
            printf("Opcao invalida! Sua temperatura eh em Celsius(C), Fahrenheit(F) ou Kelvin(K)?\n");
            scanf(" %c", &opcao);

            while (getchar() != '\n'); // limpa o buffer de entrada

            opcao = toupper(opcao);
        }

        if (opcao == 'C') {
            printf("Digite a temperatura em Celsius:\n");
            scanf("%f", &c);

            f = (c * (9.0 / 5.0) + 32.0);
            k = (c + (273.15));

            printf("Voce digitou %.2f, que equivale:\n", c);
            printf("A temperatura em Fahrenheit eh: %.2f\n", f);
            printf("A temperatura em Kelvin eh: %.2f\n", k);
        }
        else if (opcao == 'F') {
            printf("Digite a temperatura em Fahrenheit:\n");
            scanf("%f", &f);

            c = (f - 32.0) * (5.0 / 9.0);
            k = (f + (459.67 * (5.0 / 9.0)));

            printf("Voce digitou %.2f, que equivale:\n", f);
            printf("A temperatura em Celsius eh: %.2f\n", c);
            printf("A temperatura em Kelvin eh: %.2f\n", k);
        } else {
            printf("Digite a temperatura em Kelvin:\n");
            scanf("%f", &k);

            c = (k - 273.15);
            f = (c * (9.0 / 5.0) + 32.0);

            printf("Voce digitou %.2f, que equivale:\n", k);
            printf("A temperatura em Celsius eh: %.2f\n", c);
            printf("A temperatura em Fahrenheit eh: %.2f\n", f);
        }

        while (1) {
            printf("Deseja continuar ou sair?\n");
            scanf("%s", r);

            if (strcmp(r, "sair") == 0) {
                printf("Saindo...\n");
                break;
            } else if (strcmp(r, "continuar") == 0) {
                printf("Voltando ao menu...\n");
                break;
            }
            else {
                printf("Resposta invalida! Digite continuar ou sair.\n");
            }
        }
    } while (strcmp(r, "sair") != 0);
    return 0;
}