#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n, min, max, random, i = 1;
    int contatore = 0;
    do {
        printf("numero numeri:");
        scanf("%d", &n);
    } while (n <= 0);
    printf("numero minimo:");
    scanf("%d", &min);

    do {
        printf("numero massimo:");
        scanf("%d", &max);
    } while (max < min);
    for (i; i < n + 1; i++) {
        random = (rand() % (max - min + 1) + min);
        printf("**il numero numero %d, e' %d\n", i, random);
        int j = 1;
        for (j; j < random; j++) {
            if (random % j == 0) {
                contatore = contatore + 1;
                printf("%d e' divisore del numero %d e' indiano\n", j, random);
            }
            if (contatore == 1) {
                printf("il numero e' primo, dato che e' dal burkina faso\n");
            }
        }
    }
    return 0;
}
