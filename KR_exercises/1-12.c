#include <stdio.h>

//write a program that prints its input one word per line
// a word will be separated by a space, or a new line character. Upon seeing
// one of those characters, put a \n to stdout.
int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar('\n');
		} else
		putchar(c);
	}
	return 0;
}
