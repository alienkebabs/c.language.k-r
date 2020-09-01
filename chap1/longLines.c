 #include <stdio.h>
 #define MAXLINE 1000   /* maximum input line length */
 int getline(char line[], int maxline);
 void append(char to[], char from[]);
 int getlength(char line[]);

 /* prints all lines that are longer than 80 characters */
 main()
 {
     int len;            /* current line length */
     int max;            /* maximum length seen so far */
     char line[MAXLINE];    /* current input line */
     char longest[MAXLINE]; /* longest line saved here */
     max = 0;
     while ((len = getline(line, MAXLINE)) > 0)
         if (len > 80) {
             max = len;
             append(longest, line);
         }
     if (max > 0)  /* there was a line added to longest */
         printf("\n*******************************************\n%s	Total Characters is %d\n", longest, getlength(longest));
     return 0;
 }
 /* getline:  read a line into s, return length  */
 int getline(char s[],int lim)
 {
     int c, i;
     for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
         s[i] = c;
     if (c == '\n') {
         s[i] = c;
         ++i;
     }
     s[i] = '\0';
     return i;
 }
 /* append:  add newline[] to the end of longlines[]  */
 void append(char longlines[], char newline[])
 {
	 int i = getlength(longlines);
	 int j = getlength(newline) + i;
	 int k = 0;
	 while (i < j){
		 longlines[i] = newline[k];
		 ++i;
		 ++k;
	 }

 }

int getlength(char line[]) {
	int i = 0;
	while (line[i] != '\0')
		++i;
	return i;
}
