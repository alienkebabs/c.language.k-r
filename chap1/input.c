#include <stdio.h>

int main()
{
	char c;
    char thing[500];
    int i=0;
	while (c = (getchar()) != EOF){
        thing[i]=c;
        i++;
	    printf("%s",thing);
    }
}
