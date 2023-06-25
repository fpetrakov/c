#include <stdio.h>
#include <ctype.h>
#include <math.h>

int atoi(char s[]) {
	int i, n;

	n = 0;
	for (i = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');
	return n;
}

int lower(int c) {
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

int main() {
	return 0;
}