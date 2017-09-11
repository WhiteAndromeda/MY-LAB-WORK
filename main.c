#include <stdio.h>
#include <stdlib.h>

int main()
{
    double temperature;
    char scale;
    #define T0 273.15

    printf("$ tconvert ");
    scanf(temperature, scale);

    switch(scale)
    {
        case "C"
        printf("%.2f",temperature);
        printf(temperature" C:\n");
        printf(temperature" F\n");
        printf(temperature" K\n\n");

        printf(temperature" F:\n");
        printf(temperature" C\n");
        printf(temperature" K\n\n");

        printf(temperature" K:\n");
        printf(temperature" C\n");
        printf(temperature" F:\n");
    }

    return 0;
}
