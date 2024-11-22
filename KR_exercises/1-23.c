#include <stdio.h>
void handle_slash(char *previous, int *in_comment, int *in_quote);
void handle_asterisk(char *previous, int *in_comment, int *in_quote);
void handle_quote(int *c, char *previous, int *in_comment, int *in_quote);

//need to think about the quotes
//try drawing out a full state machine for what each case would be and how to handle. Maybe make a table?
//look for anywhere that can be modularized into functions
void handle_slash(char *previous, int *in_comment, int *in_quote) {
	if (*in_quote) {
		putchar('/');
	} else if (*in_comment && (*previous == '*')) {
		*in_comment = 0;
	} else {
		*in_comment = 1;
	}
}
void handle_asterisk(char *previous, int *in_comment, int *in_quote) {
	if (*in_comment) { return;} 
	putchar('*');

}
void handle_quote(int *c, char *previous, int *in_comment, int *in_quote) {
	if (*in_comment) {return;}
//	else if (*previous == '\\') { return; }
	else if (*in_quote) {
		*in_quote = 0;
		putchar(*c);
	} else if (!*in_quote){
		*in_quote = 1;
		putchar(*c);
	}

}

int main()
{
	int c;
	int in_comment = 0;
	int in_quote = 0;
	char previous;

	while ((c = getchar()) != EOF) {
		switch(c) {
		case '/':
			handle_slash(&previous, &in_comment, &in_quote);
			previous = c;
			break;
		case '*':
			handle_asterisk(&previous, &in_comment, &in_quote);
			previous = c;
			break;
		case '"':
			//printf("at char is %d", c);
			handle_quote(&c, &previous, &in_comment, &in_quote);
			previous = c;
			break;
		case '\'':
			handle_quote(&c, &previous, &in_comment, &in_quote);
			previous = c;
			break;

		default:
			//printf("at in default char is %d", c);
			if (!in_comment) {
				putchar(c);
			} else if (in_comment && (c == '\n')) {
				putchar(c);
				in_comment = 0;
			}
			previous = c;
			break;
		}
		
	}
	return 0;
}
