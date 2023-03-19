#include<stdio.h>

double factorial_rec(int n) {
	if (n <=1) return 1;
	else return(n * factorial_rec(n - 1));
}

double factorial_iter(int n) {
	double i, result = 1;
	for (i = n; i>0; i--)
		result = result * i;
	return(result);
}

int main() {
	
	double result_rec = factorial_rec(20);
	double result_iter = factorial_iter(20);

	printf("20!의 값: %f\n", result_rec);
	printf("20!의 값: %f\n", result_iter);
 
 return 0;
}
