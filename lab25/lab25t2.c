#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int rand10(int mmax) {
	return 1 + rand() % mmax;
}

double rand_double(double dmin, double dmax) {
	return dmin + (double)rand() / RAND_MAX * (dmax - dmin);
}
int rand101(int n, int mmax) {
	for (int i = 1; i < n; i++) {
		printf("%d", 1 + rand() % mmax);
	}
}

int main() {
	setlocale(LC_ALL, ".UTF8");
	srand(time(NULL));
	int n,mmax;
	double dmin, dmax;
	scanf_s("%d %d %lf %lf", &n, &mmax, &dmin, &dmax);
	printf("Одно целое число %d \n", rand10(mmax));
	printf("Одно целое вещественное число %lf\n", rand_double(dmin,dmax));
	printf("%d чисел все до %d - %d\n", n, mmax, rand101(n,mmax));

}