#include "stdio.h"
#include "Windows.h"
#define WIDTH 50

int 
main(void)
{
	int length = 1;
	int to_right = 1;
	while (1) {
		for (int i = 1; i <= length; i++)
		{
			printf(" ");
		}
		printf("*");
		for (int i = length+1; i <= WIDTH; i++)
		{
			printf(" ");
		}
		printf("\r");
		Sleep(50);
		//fflush(stdout);
		if (to_right) {
			length++;
			if (length == 30) to_right = 0;
		}
		else {
			length--;
			if (length == 1) to_right = 1;
		}
	}
	return 0;
}
