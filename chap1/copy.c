#include <stdio.h>

/*count characters in input; 1st version */

main() 
{
	long nc;

	nc = 0;
	while (getchar() != '\n')
		++nc;
	printf("%ld\n", nc);
}
