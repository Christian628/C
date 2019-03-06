#include <stdio.h>
#define X (1 + 1)

int 
main(void){
	
#if 0
	printf("Hello world, for the %d. time\n",2);

	// one line comment 
	
	/*
	 * Multi
	 * line
	 * comment.
	 */

	printf("%d\n", 100==101); // bool is int
#endif


	int finished = 0;
	while(1){
		if(finished)
			break;
		printf("Running...\n");
		finished = 1;
	}
	printf("Stopped running\n\n");
	
	//Sizeof is not a function but an operator
	char c = 'A';
	printf("Char: %d\n",c);
	printf("Char again: %c\n",c);
	printf("Size: %zu\n\n", sizeof(c));

	short sh = 13;
	printf("Short int: %d\n",sh);
	printf("Size: %zu\n\n", sizeof(sh));

	unsigned int u = 14;
	printf("Unsigned int: %u\n",u);
	printf("Size: %zu\n\n", sizeof(u));

	unsigned long long llu = 15;
	printf("Unsigned long long: %llu\n",llu);
	printf("Size: %zu\n\n", sizeof(llu));

	size_t count = 16;
	printf("Size_t can be either u, ul,ull... use 'z' to convert: %zu\n",sizeof(12));

	int i,j,k; i = j = k = 1;

	while((c = getchar()) != EOF){
		printf("%c",c);
	}


	return (0);
}
