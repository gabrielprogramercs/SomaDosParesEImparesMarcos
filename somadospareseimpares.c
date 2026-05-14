#include <stdio.h>



int main() {
    int n, i, sumEven = 0, sumOdd = 0;

    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int num;
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            sumEven += num;
        } else {
            sumOdd += num;
        }
    }

    printf("Soma dos números pares: %d\n", sumEven);
    printf("Soma dos números ímpares: %d\n", sumOdd);

    return 0;
}