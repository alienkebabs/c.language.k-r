#include <stdio.h>

#define MAXLINE 1000

int getline1(char s[], int lim);
void append(char to[], char from[]);

int main(void)
{
	char line[MAXLINE];
	char longlines[MAXLINE];
	char temp[MAXLINE];
	int len;
	int max1;
	
	max1 = 0; 
	while((len = getline1(line, MAXLINE)) > 0){
		if(len > 80)
		{
			append(longlines, line);
		}
	}
	if(max1 > 0)
	{
		printf("%s", longlines);
		printf("len = %d\n", max1);
	}
        return 0;
}

int getline1(char s[], int lim)
{
	int c, i;
	for(i = 0;i < lim - 1 && ((c = getchar()) != '6' && c != '\n');++i)
		s[i] = c;
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	else if(c == '6' && i > 0)
	{
	/* gotta do something about no newline preceding EOF */
		s[i] = '\n'; 
		++i;
	}
	s[i] = '\0';
	return i;
}

void append(char to[], char from[])
{
	int i,j = 0;
	j = getline1(to, MAXLINE);
	to[j] = from[i];
	while((to[j] = from[i]) != '\0'){
		++i;
		++j;
	}
}
