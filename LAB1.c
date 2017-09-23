#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float t;    //temperature
char scale;    //temperature scales
float min[] = {0, 273.15, 459.67};

int main(int argc, char *argv[])    //counting the number of variables
{
    switch(argc)
    {
        case 1 :
        {
            printf("No input data\n");ы
            return 0;
        }
        case 2 :
            t = atof(argv[1]);
            break;
        case 3 :
        {   
            if (stricmp("C", argv[2])== 0)
                scale = 'C';
            else
                if(stricmp("F", argv[2])== 0)
                    scale = 'F';
                else
                    if(stricmp("K", argv[2])== 0)
                        scale = 'K';
            t = atof(argv[1]);
            break;
        default:
            ;
        }
    }

    printf("$ tconvert ");

    switch(scale)
    {
        case 'C' :    //celsius
        {
            if (t < -min[1])
            {
                printf("invalid input");
                exit(0);
            }
            else
            {
                printf("%.2f C\n", t);
                printf("%.2f F\n", (t*9/5+32));
        	    printf("%.2f K\n", (t+min[1]));
                break;
            }
		}
		case 'F' :    //fahrenheit
		{
            if (t < -min[2])
            {
                printf("invalid input");
                exit(0);
            }
            else
            {
        	    printf("%.2f F\n", t);
        	    printf("%.2f C\n", ((t-32)*5/9));
        	    printf("%.2f K\n", ((t+min[2])*5/9));
                break;
            }
		}
		case 'K' :    //kelvin
		{
            if (t < min[0])
            {
                printf("invalid input");
                exit(0);
            }
            else
            {
        	    printf("%.2f K\n", t);
        	    printf("%.2f C\n", (t-min[1]));
                printf("%.2f F\n", (t*9/5-min[2]));
                break;
            }
        }
        default :
        {
        	printf("%.2f\n\n", t);

            if (t < -min[1])
                printf("invalid input\n\n");
            else
            {
        	    printf("%.2f C:\n", t);
        	    printf("%.2f F\n", (t*9/5+32));
        	    printf("%.2f K\n\n", (t+min[1]));
            }
            if (t < -min[2])
                printf("invalid input\n\n");
            else
            {
        	    printf("%.2f F:\n", t);
        	    printf("%.2f C\n", ((t-32)*5/9));
        	    printf("%.2f K\n\n", ((t+min[2])*5/9));
            }

            if (t < min[0])
            {
                printf("invalid input\n\n");
                exit(0);
            }
            else
            {
        	    printf("%.2f K:\n", t);
        	    printf("%.2f C\n", (t-min[1]));
        	    printf("%.2f F\n", (t*9/5-min[2]));
            }
		}

    }

    return 0;
}
