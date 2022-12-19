#include <stdio.h>
#include <string.h>

int casoDePrueba();

int main() {

    while (casoDePrueba());

    return 0;
}

int casoDePrueba() {
    int num, i;
    int dcha = 0;
    int izqda = 0;
    int turno = 1;
    char palabra[6] = {};
    scanf("%d", &num);
    if (!num) return 0;
    for (i = 0; i < num; i++) {
        scanf(" %s", palabra);
        if (strcmp(palabra, "PIC") == 0) turno *= -1;
        if (strcmp(palabra, "POC") == 0) continue;
        if (strcmp(palabra, "PONG!") == 0) turno > 0 ? izqda++ : dcha++;
    }
    printf("%d %d\n", izqda, dcha);
    return 1;
}
