#include <stdio.h>

void casoDePrueba();

int main() {
    int n;

    scanf("%d", &n);

    while (n--) {
        casoDePrueba();
    }

    return 0;
}

void casoDePrueba() {
    int num, i;
    char palabra1[21] = {};
    char palabra2[21] = {};
    char palabra3[21] = {};
    char nombre [4] = {};
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf(" %[^\n]s", nombre);
        palabra1[i] = nombre[0];
        palabra2[i] = nombre[1];
        palabra3[i] = nombre[2];
    }
    for (i = 0; i < num; i++) {
        printf("%c", palabra1[i]);
    }
    for (i = 0; i < num; i++) {
        printf("%c", palabra2[i]);
    }
    for (i = 0; i < num; i++) {
        printf("%c", palabra3[i]);
    }
    printf("\n");
}
