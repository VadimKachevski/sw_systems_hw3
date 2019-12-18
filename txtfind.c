#include "txtfind.h"
#include <stdio.h>
#include <string.h>

int similar(char* s,char* t)
{
    int countS=0;
    int countT=0;

    int sizeS = strlen(s);
    int sizeT = strlen(t);

    while((countS < sizeS) && (countT < sizeT))
    {
        if(s[countS] == t[countT])
        {
            countT++;
            countS++;
        }
        else
        {
            countT++;
        }
    }
    if( countT+(sizeT-countT) - countS+(sizeS-countS) <= 1)
    {
    return 1;
    }
    return 0;
    
}

int GetLines(char s[256][256],FILE** fp)
{
    int i =0;
    while(fgets(s[i],256,*fp))
    {
        s[i][strlen(s[i])-1] = '\0';
        i++;
    }
    return i;
}
int printLinesWhereStringExsits(char mat[256][256],char s[30],int numberOfLines,char OP)
{
    char CurrWord[30];
    for (int i = 0; i <= numberOfLines; i++)
    {
        int corrIndex = 0; // String index 
        int WordIndex = 0; // Word index
        for(corrIndex = 0;corrIndex <= strlen(mat[i]);corrIndex++)
        {
        if((mat[i][corrIndex] != ' ') &&  (mat[i][corrIndex] != '\t') && (mat[i][corrIndex] != '\0') && (mat[i][corrIndex] != '\n')   )
        {
            CurrWord[WordIndex] =mat[i][corrIndex];
            WordIndex++;
        }
        else
        {
        CurrWord[WordIndex] = '\0';
        WordIndex = 0;
       // printf("%d === ",similar(CurrWord,s));
        if(similar(s,CurrWord) == 1)
        {
            if(OP == 'a')
            {
            puts(mat[i]);
            break;
            }
            if(OP == 'b')
            {
                printf("%s \n",CurrWord);
            }
        }
        }
        }
         
    }
  // printf("%s \n",CurrWord);
    return 0;
}

