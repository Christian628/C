#include <stdio.h>

#UNFINISHED

int
main(void){
	
	FILE *fp = fopen("test.txt","w");
	fprintf(fp,"Hello world");
	fclose(fp);

	FILE *p = fopen("test.txt","r");
	char result[20];
	fgets(p,"%s",result);
	printf("%s",result);
	fclose(p);

	return 0;
}
