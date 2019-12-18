#include "txtfind.h"
#include <stdio.h>
#include <string.h>

int main()
{
  char line[LINE][LINE];
  FILE *fp = stdin;
  int numberOfLines =0;
 
  char s[WORD];
  char OP;
   numberOfLines = GetLines(line,&fp);
   int i=0;
    for(i=0;i<strlen(line[0]);i++)
    {
        if(line[0][i] != ' ')
        {
            s[i] = line[0][i];
        }
    }
    s[i] = '\0';
    OP = line[0][i-1];
   printLinesWhereStringExsits(line+2,s,numberOfLines,OP);
    return 0;
}