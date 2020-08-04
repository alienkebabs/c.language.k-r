#include <stdio.h>


/* replace all blanks with unambiguous characters */

int main()
{
	int c;
	while ((c = getchar ()) != '6'){
		if (c == ' '){
			putchar('\\');
			putchar('s');
		}

		else if (c == '\n'){
			putchar('\\');
			putchar('n');
			putchar('\n');
		}
		else if (c == '\t'){
			putchar('\\');
			putchar('t');
		}
		else 
			putchar(c);
	}
}
