#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, c1, C2, r1, R2;

int main()
{
    scanf("%d", &a);
    r1 = (a * sqrt(3) / 2) / (3 * a / 2);
    c1 = 2 * r1 * M_PI;
    R2 = (3 * a) / (4 * a * sqrt(3) / 2);
    C2 = 2 * R2 * M_PI;
    printf("Radius1 = %.2f, Radius2 = %.2f, Length1 = %.2f, Length2 = %.2f", r1, R2, c1, C2);
    return 0;
}
