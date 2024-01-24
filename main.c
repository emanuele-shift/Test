#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //random number seed

    srand(time(0));
    int n, min, max, random, i = 1;

    // how many numbers I need to control if they're prime or not

    do {
        printf("numero numeri:");
        scanf("%d", &n);
    } while (n <= 0);

    //minumum number

    printf("numero minimo:");
    scanf("%d", &min);

    //maximum number

    do {
        printf("numero massimo:");
        scanf("%d", &max);
    } while (max < min);

    //generate a random number

    for (i; i < n + 1; i++) {
        random = (rand() % (max - min + 1) + min);
        printf("**il numero numero %d, e' %d\n", i, random);
        int j = 2;
        int contatore = 0;

        //control if the number is prime or not

        for (j; j < random; j++) {

            //number not prime

            if (random % j == 0) {
                contatore = contatore + 1;
                printf("%d e' divisore del numero %d e' indiano\n", j, random);
            }
        }

        //prime number

        if (contatore == 0) {
            printf("il numero e' primo, dato che e' dal burkina faso\n");
        }
    }
    return 0;
}
