#include <stdio.h>

int main() {
	int c, nl;

	nl = 0;
	c = 0;

	while ((c = getchar()) != EOF) 
		if (c == '\n') // single ' will return ASCII code of character
			++nl;
			printf("%i\n", 'A'); // 65 in this case
	printf("%d\n", nl);
}