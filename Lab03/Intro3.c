#include <stdio.h>

int is_whitespace(int c);

int
counter(void){
	
	int c; // not char because EOF is -1
        int count = 0;
        int flag = 0;
        while((c = getchar()) != EOF && printf("%c",c)){ //if it's EOF it won't eval the print
                if(flag == 0 && !is_whitespace(c)){
                        flag = 1;
                }
                if(flag == 1 && is_whitespace(c)){
                        flag = 0;
			count++;
                }
        }
        printf("##################################################\nWord count: %d\n",count);

        return 0;
}

int
recursive(int n){
	printf("%d\n",n);
	if(n == 0){
		return 0;
	}else{
		recursive(n-1);
	}

}

int 
main(void){
	
	char a[] = {"hello world"}; //={0} init all elements to 0i
	int i = 0;
	while(i < sizeof(a)/sizeof(a[0])){
		printf("%c\n",a[i]);
		i++;
	}

	//counter();
	
	recursive(10);

	int a[4][2]{   //size of first dim only can be omitted
		{1,2},
		{3,4},
		{5}
	}
	int x = 0;
	int y = 0;
	while(x < 5){
		while(y < 3){
		printf("%d\n",a[x,y]);
		x++; y++;
		}
	}
	return 0;
}


int
is_whitespace(int c){

        if(c == ' ' || c == '\n' || c == '\t'){
                return 1;
        }else{
                return 0;
        }
}
