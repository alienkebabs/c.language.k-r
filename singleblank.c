#include <stdio.h>

#define IN  1    /* inside a group of whitespace characters */
#define OUT 0    /* outside of whitespace */

/* copy input to output, replace sets of blanks with one blank */

int main()
{
	int c, nl, state;
	nl = 0;
	state = OUT;
	while ((c = getchar ()) != '6'){
		if (c == ' ' || c == '\n' || c == '\t')
			state = IN;
		else if (state == IN){
			c = '1';
			state = 0;
		}
		else
			state = 0;
		putchar(c);
	}
}
