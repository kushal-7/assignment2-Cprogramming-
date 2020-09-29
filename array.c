#include <stdio.h>
int main(){

	char A[2][4] = {{ 'A', 'B', 'C', 'D' }, { 'a', 'b', 'c', 'd' }};
	char B[2][4] = {{ 'A', 'B', 'C', 'D' }, { 'E', 'F', 'G', 'H' }};

	int i,j,L;
	for(i=0; i<2;i++){
		for(j=0;j<4;j++){
			L=A[i][j] == B[i][j];
			printf("\n%c AND %c=%d", A[i][j],B[i][j],L);
		}
	}

}