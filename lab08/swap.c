#include <stdio.h>

void
swap(int* a, int* b){

	int p = *a;
	*a = *b;
	*b = p;
}


int
main(void){
	
	int a = 1;
	int b = 2;

	swap(&a,&b);

	printf("%d %d\n",a,b);

	return 0;
}
