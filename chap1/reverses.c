#include <stdio.h>

void reverses(char s[]);
int getlength(char line[]);

int main(void)
{
    char thing[] = "not backwards";
    printf("%s\n",thing);
    reverses(thing);
    printf("%s\n",thing);
}

void reverses(char s[])
{
    int end = getlength(s);
    int i;
    for(i = end; i >= 0; --i)
        printf("%c",s[i]);
    printf("\n");
}

int getlength(char line[]){
    int i = 0;
	while (line[i] != '\0')
		++i;
	return i;
}