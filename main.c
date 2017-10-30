#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
        unsigned int i_a = 0x7f01b78a;
        unsigned int i_b = 0;
        unsigned int m = 0x0000000f;
        int c = 28;
        int i;
        printf("i_a = %X\n", i_a);

        for (i=1; i<=8; i++)
        {
            i_b |= ((i_a & m) << c);
            c = c - 4;
            i_a = i_a >> 4;
        }
        printf("i_b = %X\n", i_b);

}
