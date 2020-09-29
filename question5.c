#include <stdio.h>
int main(){
	int A[8] = { 0, 0, 0, 0, 1, 1, 1, 1 }; 
	int B[8] = { 0, 0, 1, 1, 0, 0, 1, 1 }; 
	int C[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };
	int o, ans;
	for (o=0;o<8;o++){
		ans=A[o] && B[o] && C[o];
		printf("\n%d", ans);
	}
}