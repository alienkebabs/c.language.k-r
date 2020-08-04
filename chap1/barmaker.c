#include <stdio.h>

/* program to make a bar for the histogram exercise 1-13 */

void barmaker(int m);

int main() {
	barmaker(1);
	barmaker(5);
	barmaker(10);
}

void barmaker(int leng)
{
       	for (int i = 0; i < leng; ++i)
		printf("|");
	printf("\n");
}
