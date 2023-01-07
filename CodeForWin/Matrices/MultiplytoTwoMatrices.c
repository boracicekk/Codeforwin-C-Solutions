#include <stdio.h>
#include <stdlib.h>
#define size 3
//C program to multiply two matrices

int main(int argc, char *argv[]) {
	int i,j;
	int A[size][size];
	int B[size][size];
	int C[size][size];
	printf("Enter your first Matrice:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter your second Matrice:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			C[i][j]=A[i][j]*B[i][j];
		}
	}
	printf("\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
