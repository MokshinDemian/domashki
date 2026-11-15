#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	int n,A[100];
	puts("Введите кол-во чисел");
	scanf_s("%d", &n);
	for(int i = 0; i < n; i ++){
		printf("Введите %d - ое число\n", i+1);
		scanf_s("%d", &A[i]);
	}
	int max = -100000;
	for (int i=0; i < n; i++) {
		if (max < A[i]){
			max = A[i];
		}
	}
	int min = 100000;
	for (int i=0; i < n; i++) {
		if (min > A[i]) {
			min = A[i];
		}
	}
	int summ = 0;
	for (int i = 0;i < n;i++) {
		summ += A[i];
	}
	printf("Результат = %d", summ - max - min);
}