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
	while(fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}