#include<stdio.h>  //This will stop warnings. (printf include)


int
main(void)
{
	printf("Hello" 
	 
	  " world\n"); // Cannot use implicit newline in the string.
	
	int i = 13;
	int j = 12;

	printf("%d\n",i);
	//printf("%d %d\n",i);
	//printf("%d%d\n",i);
	
	printf("%d %d\n",i,i);
	printf("%d%d\n",i,i);

	printf("%d\n", i++);
	printf("%d\n", i);
        printf("%d\n", ++i);

	while(i < 20){
		printf("%d\n",i);
		++i;
	}

	int a = 1;
	float k = 2.54;

	while ( a <= 20){
		printf("%d\t%f\n",a,a*k);
		++a;
	}
	return  0;
}

