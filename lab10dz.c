#include <stdio.h>
#include <locale.h>
#include <math.h>
void draw_rectangle(int a, char c) {
    for (int i = 0; i <= a * sqrt(2); i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j <= 2 * (a - i); j++) {
            if (i == 0 || j == 0 || j == 2 * (a - i)) {
                printf("%c", c);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

float area_triagle(float a) {
    return (a * a) / 2;
}





int main() {
    setlocale(LC_ALL, ".UTF8");
    int a;
    char c;
    puts("Введите длину боковой линии:");
    scanf_s("%d\n", &a);
    scanf_s("%c", &c);
    printf("Определение функции:\n");
    printf("Прямоугольный равнобедренный треугольник\n");
    printf("Имеет угол 90 градусов\n");
    printf("Площадь треугольника %.2f\n", area_triagle(a));
    printf("Рисунок треугольника:\n");
    draw_rectangle(a, c);
    return 0;
}