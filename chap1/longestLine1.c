#include <stdio.h>
#define MAXLINE 10 /* maximum input line length */

int getline1(char line[], int maxline);
void copyy(char to[], char from[]);

/* print the longest input line */
int main()
{
	int len;		/* current line length */
	int max;		/* maximum length seen so far */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	len, max = 0;

	while ((len = getline1(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copyy(longest, line);
		}
	}
	printf("%d , %d\n", max, MAXLINE);
	if (max > 0) {
		if(max > MAXLINE){
			printf("\n\nStorage limit exceeded by : %d", max - MAXLINE);
			printf("\nString Length : %d", max);
			printf("\n%s", longest);
		}
		else
			printf("%s", longest);
	printf("\n");
	return 0;
	}
}

/* getline: read a line into s, return length */
int getline1(char line[],int maxline)
{
	int c, i;

	for (i=0; i < maxline-1 && (c=getchar()) != '6' && c!='\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */

void copyy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
