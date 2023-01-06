#include <stdio.h>
#include <stdlib.h>
#define size 3
//C program to add two matrices


int main(int argc, char *argv[]) {
	int A[size][size];
	int B[size][size];
	int C[size][size];
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
