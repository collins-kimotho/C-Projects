#include <stdio.h>
#include <string.h>

int main()
{
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    // However if you are working with strings, then this is a bit different.

    char z[15] = "water"; // ensure that you include the size of the variable in each when swapping strings.
    char w[15] = "lemonade";
    char tem[15];

    strcpy(tem, z);
    strcpy(z, w);
    strcpy(w, tem);

    printf("z= %s\n", z);
    printf("w = %s\n", w);
}
