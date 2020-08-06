#include <stdio.h>

/* program to make a histogram of the number of times a character appears in a set of input Exercise 1-14 */

void barmaker(int m);

int main() {
	int c;
	int hist[26];
	for (int i = 0; i < 26; ++i)
		hist[i] = 0;
	
	while ((c = getchar()) != '6'){
		if (c >= 'a' && c <= 'z')
			++hist[c - 'a'];
		else if (c >= 'A' && c <= 'Z')
			++hist[c - 'A'];
	}
	//print the values in hist
	printf("\nHistogram of the number of times each character is used\n\n");
	for (int i = 0; i < 26; ++i) {
		printf("%c " ,i+'A');
		barmaker(hist[i]);
	}
}

void barmaker(int leng)
{
       	for (int i = 0; i < leng; ++i)
		printf("|");
	printf("\n");
}
