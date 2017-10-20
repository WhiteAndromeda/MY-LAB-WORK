#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define maska1byte 255
#define maxbytes 4

int save[maxbytes] = {0}; 
int maskabyte[maxbytes] = {0};
int n[2] = {0};
int Number = 0, NewNumber = 0, CNT;

int main()
{	
	printf("Enter NUMBER: "); scanf("%d", &Number);
	printf("Enter how many bytes in the number(if you don't know write 0): "); scanf("%d", &CNT);
	printf("Enter number of the biggest byte you want to change: "); scanf("%d", &n[0]);
	printf("Enter number of the least byte you want to change: "); scanf("%d", &n[1]);
	if (CNT == 0) 
		CNT = maxbytes;
	for (int i = 0; i <= CNT-1; i++)
	{
		maskabyte[i] = maska1byte << 8*(i);
		save[i] = (maskabyte[i]) & Number;
		if (i + 1 == n[0])
			save[i] = save[i] >> 8*(n[0]-n[1]);
		else 
			if (i + 1 == n[1])
				save[i] = save[i] << 8*(n[0]-n[1]);
		NewNumber += save[i];
	}
	printf("%d", NewNumber);
	return 0;
}
