#include <stdio.h>
#define MAXLINE 1000 //maximum input line size

int n_getline(char s[], int lim);

int n_getline(char s[], int lim) {
	int c, i;
	for (i = 0; (i < lim - 1) && ((c=getchar()) != EOF) && (c != '\n') ;i++) {
		s[i] = c;	

	} //this will capture all the way up to a \n
	if (c == '\n') {
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return i-1; //subtract one to be less than the ending character in the return
}

int main() {
	
	char line[MAXLINE];
	int len;
	while ((len = n_getline(line, MAXLINE)) > 0){
	int temp = len - 1;
	int i = 0;
	while (temp > i) {
		int b = line[temp];
		line[temp] = line[i];
		line[i] = b;
		--temp;
		++i;
	}
	printf("%s",line);
	}
}

