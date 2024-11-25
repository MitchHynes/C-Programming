#include <stdio.h>
#include <string.h>

void squeeze_v1(char s[], int c);
void squeeze_v2(char s1[], char s2[]);
int in_string(char s[], int c);

//original squeeze in textbook
void squeeze_v1(char s[], int c){
	//this function removes all occurences of c in s
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++) {
		if (s[i] != c) 
			s[j++] = s[i];
	}
	s[j] = '\0';
}

int in_string(char s[], int c) {
	int value = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == c)
			value = 1;
	}
	return value;
}

//new squeeze for exercise 2-4
void squeeze_v2(char s1[], char s2[]) {
	int i,j;
	for (i = j = 0; s1[i] != '\0'; i++) {
		if (!in_string(s2, s1[i])) {
			s1[j++] = s1[i];	
		}
	}
	s1[j] = '\0';
}

int main() {
	char s1[] = "abcdefghijklmnopqrstuvwxyz";
	char s2[] = "zyxwvutsrabcdefg";
	squeeze_v2(s1, s2);
	printf("s1: %s\n",s1);
	printf("s2: %s\n",s2);
	return 0;
}
