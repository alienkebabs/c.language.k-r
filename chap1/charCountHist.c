#include <stdio.h>

/* program to make a histogram of word lengths exercise 1-13 */

void barmaker(int m);

int main() {
	int c;
	int nchar = 0;
	int hist[16];
	for (int i = 0; i < 16; ++i)
		hist[i] = 0;
	
	while ((c = getchar()) != '6')
		if (c == ' ' || c == '\n' || c == '\t'){
			if (nchar > 0)
				++hist[nchar];
			nchar = 0;
		}
		else
			++nchar;
	
	//print the values in hist
	printf("\nHistogram of character lengths of words\n\n");
	for (int i = 1; i < 16; ++i) {
		printf("%d " ,i);
		barmaker(hist[i]);
	}
}

void barmaker(int leng)
{
       	for (int i = 0; i < leng; ++i)
		printf("|");
	printf("\n");
}
