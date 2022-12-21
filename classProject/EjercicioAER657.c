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
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int a2 = a > 0 ? a - 1 : a;
    int b2 = b > 0 ? b - 1 : b;
    int c2 = c > 0 ? c - 1 : c;
    if ((a2 - b2) * (a2 - b2) == (c2 - b2) * (c2 - b2)) printf("EMPATE\n"); else printf("%d\n", (a2 - b2) * (a2 - b2) < (c2 - b2) * (c2 - b2) ? a : c);
}
