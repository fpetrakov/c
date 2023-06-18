#include <stdio.h>
#include <limits.h>

int main(void) {
	printf("char: %d\n", CHAR_MAX);
	printf("short: %hi\n", SHRT_MAX);
	printf("int: %d\n", INT_MAX);
	printf("unsigned long: %lu\n", ULONG_MAX);

	if (CHAR_MAX == UCHAR_MAX) {
		printf("This machine uses unsigned char by default\n");
	} else {
		printf("This machine uses signed char by default\n");
	}

	return 0;
}