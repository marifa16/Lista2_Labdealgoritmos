#include <stdio.h>
#include <ctype.h>
#include <string.h>

int contar(char *frase) {
    int contador = 0;
    char *p = frase;

    while (*p != '\0') {
        char c = tolower(*p); // Converte para minusculo
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
        p++;
    }
    return contador;
}

int main() {
    char frase[1000];
    
    printf("Digite uma frase. quando terminar, digite 'fim'.\n");

    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    if (strcmp(frase, "fim") == 0){
        return 0;
    }

    int num_vogais = contar(frase);
    printf("A frase tem %d vogais.\n", num_vogais);

    return 0;
}