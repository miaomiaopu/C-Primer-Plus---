#include <stdio.h>

int main()
{
    int width = 3, num = 21, precision = 2;
    float numf= 3.1;
    printf("%*d\n", width, num);
    printf("%*.*f\n", width, precision, numf);
    return 0;
}