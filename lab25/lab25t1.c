#include <stdio.h>
#include <locale.h>
#include <time.h>
int main() {
	srand(time(NULL));
	setlocale(LC_ALL, ".UTF8");
	int m = 1 + rand() % 10;
	int k;
	scanf_s("%d", &k);
	if (k == m) {
		printf("Число угадано!");
	}
	else {
		printf("Число не угадано! Число - %d", m);
	}
}