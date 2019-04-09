#include <stdio.h>

int
main(){
	
	int i = 1;
	int j = 2;

	int *a[] = {&i,&j};
	int  b[] = {i,j};

	int *p = a[0]; 
	int *q = &b[0];

	
	printf("%p %p\n", p, q);
	printf("%d %d\n", *p, *q);

	printf("%zu\n",q-p);
	return 0;
}
