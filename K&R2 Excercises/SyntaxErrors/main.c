#include <stdio.h>

#define MAXLINE 1000

char line[MAXLINE];

int my_getline(void);

int main() {
    int len, i = 0;
    int brace = 0, bracket = 0, parentheses = 0;
    int single_quote = 1, double_quote = 1;

    while ((len = my_getline()) > 0) {
        i = 0;

        while (i < len) {
            if (line[i] == '[')
                brace++;
            if (line[i] == ']')
                brace--;
            if (line[i] == '(')
                parentheses++;
            if (line[i] == ')')
                parentheses--;
            if (line[i] == '\\')
                single_quote *= -1;
            if (line[i] == '"')
                double_quote *= -1;
            i++;
        }
    }

    if (double_quote != 1)
        printf("Mismatching double quote\n");
    if (single_quote != 1)
        printf("Mismatching single quote\n");
    if (parentheses != 0)
        printf("Mismatching parenthesis\n");
    if (brace != 0)
        printf("Mismatching brace\n");
    if (bracket != 0)
        printf("Mismatching bracket\n");

    if (bracket == 0 && brace == 0 && parentheses == 0 && single_quote == 1 && double_quote == 1)
        printf("Syntax correct.\n");

    return 0;
}

int my_getline(void) {
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}
