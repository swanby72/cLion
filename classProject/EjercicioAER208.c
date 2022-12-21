#include <stdio.h>

int casoDePrueba();

int main() {

    while (casoDePrueba());

    return 0;
}

int casoDePrueba() {
    long long f, b;
    scanf("%lld %lld", &f, &b);
    if (f == 0) return 0;
    printf("%lld\n", f * (f + 1) / 2 - (f - b + 1) * (f - b + 2) / 2);

    return 1;
}
