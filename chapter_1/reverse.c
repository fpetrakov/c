#include <stdio.h>
#include <string.h>

void reverse(char chars[]);

int main() {
	char chars[] = "Hello World!";

	printf("BEFORE: %s\n", chars);
	reverse(chars);
	printf("AFTER: %s\n", chars);
}

void reverse(char chars[]) {
	size_t len = strlen(chars);
	int temp;

	for (int idx = 0; idx < len / 2; idx++) {
		temp = chars[idx];
		chars[idx] = chars[len - idx - 1];
		chars[len - idx - 1] = temp;
	}
}