#include <stdio.h>

int 
main(void){
	int i2 = 0xFFFFFFFF;
	char s[] = {'h', 'e', 'l', 'l', 'o','h', 'e', 'l', 'l', 'o','h', 'e', 'l', 'l', 'o','h', 'e', 'l', 'l', 'o','h', 'e', 'l', 'l', 'o'};
	int i = 0xFFFFFFFF;
	//Na  zasobniku je za stringom priestor. Ked ho neukoncime \0, moze fungovat.
	
	char str[] = "hello";

	printf("%s\n",s);
}
