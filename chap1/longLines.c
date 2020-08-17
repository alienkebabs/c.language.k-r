#include <stdio.h>

#define MAXLINE 1000

int getline1(char s[], int lim);
void copyy(char to[], char from[]);

int main(void)
{
	char line[MAXLINE];
	char longlines[MAXLINE];
	char temp[MAXLINE];
	int len, max
	
	max = 0; 
	while((len = getline1(line, MAXLINE)) > 0){
		if(max < len)
		{
			max = len;
			copyy(longest, line);
		}
	}
	if(max > 0)
	{
		printf("%s", longest);
		printf("len = %d\n", max);
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

void copyy(char to[], char from[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
