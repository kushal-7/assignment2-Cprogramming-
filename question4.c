#include <stdio.h>
int main(){
	int i,p;
	int roo=5;
	for (i=roo; i>=0; i--){
		for(p=1;p<=i;p++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}