#include <stdio.h>

int main() {

    printf("Classificacao de triangulos\n\n");

    float a, b, c;

    printf("Digite o valor do lado A:\n");
    scanf("%f", &a);

    printf("Digite o valor do lado B:\n");
    scanf("%f", &b);

    printf("Digite o valor do lado C:\n");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Esse eh um triangulo equilatero. Todos os lados sao iguais: %.2f, %.2f, %.2f\n", a, b, c);
        }
        else if (a == b || a == c || b == c) {
            printf("Esse eh um triangulo isosceles. Possui dois lados iguais: ");
            if (a == b) {
                printf("%.2f e %.2f\n", a, b);
            } else if (a == c) {
                printf("%.2f e %.2f\n", a, c);
            } else {
                printf("%.2f e %.2f\n", b, c);
            }
        }
        else {
            printf("Esse eh um triangulo escaleno. Todos os lados sao diferentes: %.2f, %.2f, %.2f\n", a, b, c);
        }
    }
}