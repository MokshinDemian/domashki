#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));
    int K = 10;
    int N = 50;
    int R = 20;
    int counter[10] = { 0 };
    int A[50];

    for (int i = 0; i < N; i++) {
        A[i] = rand() % K + 1;
    }

    for (int i = 0; i < N; i++) {
        counter[A[i] - 1]++;
    }

    int max = counter[0];
    for (int i = 1; i < K; i++) {
        if (counter[i] > max) {
            max = counter[i];
        }
    }

    for (int i = 0; i < K; i++) {
        int x = counter[i] * R / max;
        printf("%2d | ", i + 1);
        for (int j = 0; j < x; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


