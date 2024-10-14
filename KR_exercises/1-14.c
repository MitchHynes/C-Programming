#include <stdio.h>

void histogram(int array[]){
	for (int i = 0; i < 128; i++) {
		int length = array[i];
			putchar(i);
			putchar(':');
			putchar(' ');
			for (int j = 0; j < length; j++) {
				putchar('X');
			}
			putchar('\n');
	}
}

int main(){
	int chars[128];
	int c;
	for (int i = 0; i < 128; i++)
		chars[i] = 0;
	while ((c = getchar()) != EOF) {
		++chars[c];
	}
	histogram(chars);
	return 0;
}
