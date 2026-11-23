#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, ".UTF8");
    int n;
    printf("Введите кол-во элементов массива \n");
    scanf_s("%d", &n);
    int A[100];
    for (int i = 0; i < n; i++) {
        A[i] = 1 + rand() % 21-10;
    }
    printf("Было\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    int left = 0;
    int right = n - 1;

    while (left < right) {

        while (left < right && A[left] >= 0) {
            left++;
        }

        while (left < right && A[right] >= 0) {
            right--;
        }

        if (left < right) {
            int temp = A[left];
            A[left] = A[right];
            A[right] = temp;

            left++;
            right--;
        }
    }
    printf("\nСтало\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}