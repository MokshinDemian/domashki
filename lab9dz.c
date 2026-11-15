#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    int a;
    char c;
    scanf_s("%d\n", &a);
    scanf_s("%c", &c);
    for (int i = 0; i <= a*sqrt(2); i++) {
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
    return 0;
}