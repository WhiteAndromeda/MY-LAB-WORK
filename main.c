#include <stdio.h>
#include <stdlib.h>

int main()
{
    double t = 5;
    char scale;
    #define T0 273.15
    scale = 'K';

    printf("$ tconvert ");
    scanf("%.2f%c", &t, &scale);
    switch(scale)
    {
        case 'C' :
        {
        	printf("%.2f C\n", t);
        	printf("%.2f F\n", t);
        	printf("%.2f K", t);
            break;
		}
		case 'F' :
		{
        	printf("%.2f F\n", t);
        	printf("%.2f C\n", t);
        	printf("%.2f K", t);
        	break;
		}
		case 'K' :
		{
        	printf("%.2f K\n", t);
        	printf("%.2f C\n", t);
        	printf("%.2f F", t);
        	break;
        }
        default :
        {
        	printf("%.2f\n",t);

        	printf("%.2f C:\n",t);
        	printf("%.2f F\n",t);
        	printf("%.2f K\n\n",t);

        	printf("%.2f F:\n",t);
        	printf("%.2f C\n",t);
        	printf("%.2f K\n\n",t);

        	printf("%.2f K:\n",t);
        	printf("%.2f C\n",t);
        	printf("%.2f F",t);
        	break;
		}

    }

    return 0;
}
