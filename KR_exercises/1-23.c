#include <stdio.h>

//need to think about the quotes
//try drawing out a full state machine for what each case would be and how to handle. Maybe make a table?
//look for anywhere that can be modularized into functions
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

	printf("testing \"""comment /* haha */");
	while ((c = getchar()) != EOF)
	{
		
	}

	return 0;
}
