#include <stdio.h>

#define SIZE 8
int
main(void){
	int array[][SIZE] = {{1,4,6,4,7,1,0,8},
			     {7,8,9,5,7,9,7,9},
			     {1,2,1,2,3,1,4,3}};
	int sum = 0;
	float avg = 0;
	float max = -9999; // need to define min int
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); ++i){
		for(int j = 0; j < sizeof(array[0])/sizeof(array[0][0]); ++j){
			sum += array[i][j];
		}
		avg = (float) sum / SIZE; //without float converts to int
		if (avg > max) max = avg;
		sum = 0;
		avg = 0;
	}
	printf("%.2f\n",max);

	// -1 > 0U ... -1 converts to unsigned 2^32-1
}
