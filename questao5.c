#include <stdio.h>
#include <locale.h>

int nota (float nota){
    return nota >= 0 && nota <= 10;
}

float calcular(float nota1, float nota2, float nota3){
    return ((nota1*3) + (nota2*2) + (nota3*3))/8; // Pesos: nota 1: 3, nota 2: 2, nota 3: 3
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;
    
    printf("MEDIA DE NOTAS\n\n");

    do {
        printf("Digite sua primeira nota:\n");
        scanf("%f", &nota1);
        
        if (!nota(nota1)) {
            printf("Nota invalida! A nota deve estar entre 0 a 10. Digite novamente.\n");
        }
    } while (!nota(nota1)); 

    do {
        printf("Digite sua segunda nota:\n");
        scanf("%f", &nota2);

        if (!nota(nota2)) {
            printf("Nota invalida! A nota deve estar entre 0 a 10. Digite novamente.\n");
        }
    } while (!nota(nota2));

    do {
        printf("Digite sua terceira nota:\n");
        scanf("%f", &nota3);

        if (!nota(nota3)) {
            printf("Nota invalida! A nota deve estar entre 0 a 10. Digite novamente.\n");
        }
    } while (!nota(nota3));

    media = calcular (nota1, nota2, nota3);

    if (media >= 7) {
        printf("Aprovado com a media: %.2f\n", media);
    } else {
        printf("Voce esta na recuperacao com a media: %.2f\n", media);
    }
}