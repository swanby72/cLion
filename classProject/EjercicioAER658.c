#include <stdio.h>

int casoDePrueba();

int main() {

    while (casoDePrueba());

    return 0;
}

int casoDePrueba() {
    int entrada;
    int altura = 0;
    int i = 1;
    scanf("%d", &entrada);
    if (entrada == 0) return 0;
    while (entrada > 0) {
        entrada -= (i * 2 - 1) * (i * 2 - 1);
        altura++;
        i++;
        if (entrada <= 0) break;
    }
    printf("%d\n", altura);

    return 1;
}
