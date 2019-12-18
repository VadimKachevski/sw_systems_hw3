#ifndef _TXTFIND_H_
#define _TXTFIND_H_
#include <stdio.h>

#define LINE 256
#define WORD 30

int GetLines(char s[256][256],FILE** fp);

int printLinesWhereStringExsits(char mat[256][256],char s[30],int numberOfLines,char OP);

int similar(char* s,char* t);

int substring(char* str1,char* str2);
void print_lines(char* str);
void print_similar_words(char* str);


#endif