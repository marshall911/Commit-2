#include <stdio.h>

int main(void)
{
    long int c;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            putchar ('*');
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            putchar ('\n');
        }
    }

    return 0;
}