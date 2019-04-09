#include <stdio.h>

int
main(){
	int *pi;
	printf("%p\n",pi);
	*pi++;
	printf("%p\n",pi);
	return 0;
}
