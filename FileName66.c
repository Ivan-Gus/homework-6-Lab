#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 

int main()
{
	setlocale(LC_CTYPE, "");
	int X;
	puts("Введите значение X: ");
	scanf("%d", &X);
	int A, B;
	A = X * X;
	B = sqrt(X);
	if ((A > X) & (X > B)) {
		printf("%d>%d>%d\n", A, X, B);
	}
	else {
		printf("%d=%d=%d, число равно в любом преобразовании",A,B,X);
	}



	return 0;
}