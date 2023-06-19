#include <stdio.h>

#define VTAB '\013'
#define BELL '\007'

size_t mystrlen(char s[]) {
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

	return 0;
}