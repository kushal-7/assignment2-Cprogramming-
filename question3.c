#include <stdio.h>
int main(){
	int i,k;
	int roo=4;
	for (i=0; i<=roo; i++){
		for(k=0;k<=i;k++){
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}