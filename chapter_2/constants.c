#include <stdio.h>

#define VTAB '\013'
#define BELL '\007'

size_t mystrlen(const char s[]) {
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

int main(void) {
	char hello[] = "Hello World!";

	printf("%d\n", mystrlen(hello));

	enum Escapes {
		TAB = '\t',
		BACKSPACE = '\b'
	};
	enum Escapes tab = TAB;
	printf("enum var: %d\n", tab);


	const double e = 2.1231231;

	return 0;
}