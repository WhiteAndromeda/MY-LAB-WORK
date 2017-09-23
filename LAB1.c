//pikbo_01_17_0943_1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

short int Flag = 0;
float temperature;
char *scales[]={"K", "C", "F"};
float min[]={0.0, 273.15, 459.67};

float * converter(float t, int num)
{
    if (t < -min[num])
    {
        printf("\n%.2f %s:\nThis temperature does not exist\n", t, scales[num]);
        return NULL;
    }
    else
        if (Flag == 0)
        {
            Flag = 1;
            printf("\n$ tconvert ");
        }

    switch(num)
    {
        case 0: 
            printf("%.2f K:\n", t);
            printf("%.2f C\n", (t - min[1]));
            printf("%.2f F\n\n", (t * 9.0 / 5.0 - min[2]));
            break;
        case 1: 
            printf("%.2f C:\n", t);
            printf("%.2f F\n", (t * 9.0 / 5.0 + 32.0));
            printf("%.2f K\n\n", (t + min[1]));
            break;
        case 2:
            printf("%.2f F:\n", t);
            printf("%.2f C\n", ((t - 32.0) * 5.0 / 9.0));
            printf("%.2f K\n", ((t + min[2])* 5.0 / 9.0));
            break;
    }
}

int main(int argc, char *argv[])  
{
    switch(argc)
    {
        case 1:
        {
            printf("\nNo input data\n");
            break;
        }
        case 2:
        {
            temperature = atof(argv[1]);
            for (int i = 0; i <= 2; ++i)
                converter(temperature, i);
            break;
        }
        case 3:
        {   
            temperature = atof(argv[1]);
            for (int i = 0; i <= 2; ++i)
                if (stricmp(scales[i], argv[2]) == 0)
                {
                    converter(temperature, i);
                    return 0;
                }
            for (int i = 0; i <= 2; ++i)
                converter(temperature, i);
            break;
        }
    }
    return 0;
}
