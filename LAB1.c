#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define K0 273.15
#define K1 459.67

float t;    //temperature
char scale;    //temperature scales

int main(int argc, char *argv[])    //counting the number of variables
{
    if (argc < 2)
    {
        printf("No input data");
        exit(0);
    }
    else
    {
        printf("$ tconvert ");
        if (argc > 2)
        {
            t = atof(argv[1]);
            printf("%s ",argv[2]);
        }
        else
            t = atof(argv[1]);
    }
    

    switch(scale)
    {
        case 'C' :    //celsius
        {
            if (t < -K0)
            {
                printf("invalid input");
                exit(0);
            }
            else
            {
                printf("%.2f C\n", t);
                printf("%.2f F\n", (t*9/5+32));
        	    printf("%.2f K", (t+K0));
                break;
            }
		}
		case 'F' :    //fahrenheit
		{
            if (t < -K1)
            {
                printf("invalid input");
                exit(0);
            }
            else
            {
        	    printf("%.2f F\n", t);
        	    printf("%.2f C\n", ((t-32)*5/9));
        	    printf("%.2f K", ((t+K1)*5/9));
                break;
            }
		}
		case 'K' :    //kelvin
		{
            if (t < 0)
            {
                printf("invalid input");
                exit(0);
            }
            else
            {
        	    printf("%.2f K\n", t);
        	    printf("%.2f C\n", (t-K0));
                printf("%.2f F", (t*9/5-K1));
                break;
            }
        }
        default :
        {
        	printf("%.2f\n\n", t);

            if (t < -K0)
                printf("invalid input\n\n");
            else
            {
        	    printf("%.2f C:\n", t);
        	    printf("%.2f F\n", (t*9/5+32));
        	    printf("%.2f K\n\n", (t+K0));
            }
            if (t < -K1)
                printf("invalid input\n\n");
            else
            {
        	    printf("%.2f F:\n", t);
        	    printf("%.2f C\n", ((t-32)*5/9));
        	    printf("%.2f K\n\n", ((t+K1)*5/9));
            }

            if (t < 0)
            {
                printf("invalid input\n\n");
                exit(0);
            }
            else
            {
        	    printf("%.2f K:\n", t);
        	    printf("%.2f C\n", (t-K0));
        	    printf("%.2f F", (t*9/5-K1));
            }
		}

    }

    return 0;
}
