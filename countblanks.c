#include <stdio.h>

/* count blanks in a line */
int main()
{
	int c, nl;
	nl = 0;
	while ((c = getchar ()) != '6')
		if (c == '\n' || c == '\t' || c == ' ')
			++nl;
	printf("%d\n", nl);
}
