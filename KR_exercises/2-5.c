#include <stdio.h>
int any(char s1[], char s2[]);

int any(char s1[], char s2[]) {
	int i, j;
	int return_val = -1;
	for (i = 0; s2[i] != '\0'; i++) {
		for (j = 0; s1[j] != '\0'; j++) {
			if (s1[j] == s2[i]) {
				return_val = j;
				goto end;
			}
		}
	}

	end:
		return return_val;
}

int main() {
	char s1[] = "abcdefg";
	char s2[] = "hijklmnofp";
	int position = any(s1,s2);
	printf("position is: %d\n",position);
	return 0;
}
