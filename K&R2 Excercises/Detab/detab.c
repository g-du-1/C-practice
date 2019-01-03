#include <stdio.h>

#define TABNUM 8

/*  
Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parame- ter?
- Replaces tabs in the input
- proper number of blanks to space to the next tab stop.
- fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parame- ter?
*/

/* Write a Program detab,which replaces tabs in the input with a proper 
  number of blanks to spaces 
  abcd###
*/

int main(void)
{
    int c, pos, sp;

    pos = 1;
    sp = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            sp = TABNUM - ((pos - 1) % TABNUM);

            while (sp > 0)
            {
                c = putchar('#');
                ++pos;
                --sp;
            }
        }
        else
        {
            putchar(c);
            ++pos;
        }
    }
    return 0;
}