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
    int n, f, t;
    scanf("%d %d %d", &n, &f, &t);
    printf("%d\n", t % ++n * f);
}
