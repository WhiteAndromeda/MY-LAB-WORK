#include <stdio.h>
#include <stdlib.h>
int X, Y;

int main()
{
    scanf("%d", &X);

    Y = sqrt(abs(X+1))/2;
    printf("%d", Y);
    return 0;
}
