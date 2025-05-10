#include <stdio.h>

int main() {

    printf("NUMERO PRIMO\n\n");

    int n, i, p = 0;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        p = 1;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            p = 1;
            break;
        }
    }
    if (p == 0) {
        printf("%d eh primo\n", n);
    } else {
        printf("%d nao eh primo\n", n);
    }
}