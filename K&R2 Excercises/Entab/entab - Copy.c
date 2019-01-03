#include <stdio.h>

#define TABNUM 8
/*

    

*/



int main(void)
{
    int c, pos, sp, tabn;

    sp = tabn = 0;

    for (pos = 1; c = getchar() != EOF; ++pos) 
    {

        if (c == ' ')
        {
            if ((pos % TABNUM) != 0)
                ++sp;
            else
            {
                sp = 0;
                ++tabn;
            }
        }
        else
        {
            for ( ; tabn > 0; --tabn)
                putchar('\t');
            if (c == '\t')
                sp = 0;
            else
                for ( ; sp > 0; --sp)
                    putchar(' ');

            putchar(c);

            if (c == '\n')
                pos = 0;
            else if (c == '\t')
                pos = pos + (TABNUM - (pos - 1) % TABNUM) -1;
        }
        
    }
    
    return 0;
}