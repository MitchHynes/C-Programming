#include <stdio.h>

int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {//using '' (single quotes) means the character represents the integer value of that character
			putchar('\\');
			putchar('t');
		} else if (c == '\b') { //seems like the stdin to the terminal doesn't record this action?
			putchar('\\');
			putchar('b');
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
	return 0;
}
