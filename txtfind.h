#ifndef _TXTFIND_H_
#define _TXTFIND_H_
#include <stdio.h>

#define LINE 256
#define WORD 30

extern char line[LINE][LINE];

int GetLines(char s[LINE][LINE],FILE** fp);
int printLinesWhereStringExsits(char mat[LINE][LINE],char s[WORD],int numberOfLines,char OP);
int similar(char* s,char* t);


#endif