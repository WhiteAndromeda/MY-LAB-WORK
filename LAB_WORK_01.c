/*pikbo_01_17_0943_1*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Flag = 1, FlagA = 0;
float temperature;
char *scales[]={"C", "F", "K"};
float min[]={273.15, 459.67, 0.0};

float * converter(float t, int num)
{
    if (t < -min[num])
    {
        printf("\n%.2f %s:\nThis temperature does not exist\n", t, scales[num]);
        return 0;
    }
    else
        if (Flag == 1)
        {
            Flag = 0;
            if (FlagA == 0)
                printf("\n$ tconvert ");
            else
                printf("\n$ tconvert %.2f\n", t);
        }

    switch(num)
    {
        case 0:
            printf("%.2f C:\n", t);
            printf("%.2f F\n", (t * 9.0 / 5.0 + 32.0));
            printf("%.2f K\n\n", (t + min[0]));
            break; 
        case 1: 
            printf("%.2f F:\n", t);
            printf("%.2f C\n", ((t - 32.0) * 5.0 / 9.0));
            printf("%.2f K\n\n", ((t + min[1])* 5.0 / 9.0));
            break;
        case 2:
            
            printf("%.2f K:\n", t);
            printf("%.2f C\n", (t - min[0]));
            printf("%.2f F\n", (t * 9.0 / 5.0 - min[1]));
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
            FlagA = 1;
            temperature = atof(argv[1]);
            int i = 0;
            while (i <= 2)
            {
                converter(temperature, i);
                ++i;
            }
            break;
        }
        case 3:
        {   
            temperature = atof(argv[1]);
            int i = 0;
            while (i <= 2)
            {
                if (strcmp(scales[i], argv[2]) == 0)
                {
                    converter(temperature, i);
                    return 0;
                }
                ++i;
            }
            FlagA = 1;
            i = 0;
            while (i <= 2)
            {
                converter(temperature, i);
                ++i;
            }
            break;
        }
    }
    return 0;
}
