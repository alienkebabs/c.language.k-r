#include <stdio.h>

#define IN  1    /* inside a group of whitespace characters */
#define OUT 0    /* outside of whitespace */

/* copy input to output, replace sets of blanks with one blank */

int main()
{
	int c, state;
	state = OUT;
	while ((c = getchar ()) != '6'){
		if (state == IN && (c == ' ' || c == '\n' || c == '\t'))
			state = IN;
		else if (c == ' ' || c == '\n' || c == '\t'){
			state = IN;
			putchar(c);
		}
		else {
			state = OUT;
			putchar(c);
		}
	}
}
