#include <stdio.h>
#include <stdlib.h>


// test buffer - line buffer
int main()
{
    char ch;
    while ((ch = getchar()) != '#')
    {
        putchar(ch);
    }
    return 0;
}