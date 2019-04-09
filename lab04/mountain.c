#include <stdio.h> 
#include <stdlib.h>
#include <string.h>



int 
main(){	
	srand(time(NULL));
	char arr[30][80];
	memset(arr,' ',80 * 30);
	int i = 0;
	int r;
	int height = 30;
	while(i < 80){
		if (height > 29){
	                r = rand() % 2;
                	if (r == 0){
                        	arr[height][i] = '/';
				height++;
				i++;
				//continue;
                	}else{
                        	arr[height][i] = '-';
				i++;
				//continue;
                	}
		}
		if (height < 2){
                        r = rand() % 2;
                        if (r == 0){
                                arr[height][i] = '\\';
				height--;
				i++;
				//continue;
                        }else{
                                arr[height][i] = '-';
				i++;
				//continue;
                        }
		}
		if( height > 1 && height < 30){
			r = rand() % 3;
                        if (r == 0){
                                arr[height][i] = '\\';
				i++;
				height--;
				//continue;
			}
                        if (r == 1){
                                arr[height][i] = '-';
				i++;
				//continue;
                        }
			if (r == 2) {
				arr[height][i] = '/';
				height++;
				i++;
				//continue;
			}	
		}
	}
	for(int k = 0; k < 30; k ++){
		for(int l = 0; l < 80; l++){
			printf("%c",arr[k][l]);
		}
	}

	return 0;
}
