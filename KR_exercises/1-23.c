#include <stdio.h>
void handle_slash(char *previous, int *in_comment, int *in_quote);
void handle_asterisk(char *previous, int *in_comment, int *in_quote);
void handle_quote(char *previous, int *in_comment, int *in_quote);

//need to think about the quotes
//try drawing out a full state machine for what each case would be and how to handle. Maybe make a table?
//look for anywhere that can be modularized into functions
void handle_slash(char *previous, int *in_comment, int *in_quote) {
	if (*in_quote) {
		putchar('/');
	} else if (*in_comment && (*previous == '*')) {
		*in_comment = 0;
	}
}
void handle_asterisk(char *previous, *int in_comment, int *in_quote) {

}
void handle_quote(char *previous, int *in_comment, int *in_quote) {
	if (*in_quote) {
		*in_quote = 0;
	} else {
		*in_quote = 1;
	}
	putchar('"');

}

int main()
{
	int in_comment = 0;
	int in_quote = 0
	char previous;
/*
pseudocode:
loop through all the characters while not EOF
	if normal,(not in comment)  print to stdout
	if normal and a quote,and in_quote is false,  in_quote is true
	if normal and a quote,and in_quote is true,  in_quote is false
	if normal and char is /, previous = /
	if normal and previous is /, and current is /, and in_quote is false, in_comment is true
	if normal and previous is /, and current is *, and in_quote is false, in_comment is true
	if in_comment is true and char is / and previous is *, in_comment is false
	else if char isnt / or * and in_comment is true, skip over the char

*/


	while ((c = getchar()) != EOF) {
		switch(c) {
		case '/':
			handle_slash(&previous, &in_comment, &in_quote);
		case '*':
			handle_asterisk(&previous, &in_comment, &in_quote);
		case '"':
			handle_quote(&previous, &in_comment, &in_quote);
		default:
			putchar(c);
			previous = c;
		}
		
	}
	return 0;
}
