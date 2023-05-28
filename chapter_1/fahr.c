#include <stdio.h>

int main() {
	/* 
	 float is 4 bytes (32 bits)
	 */
	float fahr, celsius;
	/*
	 int is 2 bytes (16 bits) or 4 bytes (32 bits) depending on the system 
	 */
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Temperatures: \n");
	while(fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}