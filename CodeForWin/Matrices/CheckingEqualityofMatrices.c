#include <stdio.h>
#include <stdlib.h>
#define size 3
//C program to check whether two matrices are equal or not

int main(int argc, char *argv[]) {
	int i,j;
	int A[size][size];
	int B[size][size];
	printf("Enter your first Matrice: \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter your second Matrice: \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&B[i][j]);
		}
	}
	int Equality=1;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(A[i][j]!=B[i][j]){
			Equality=0;
			}
		}
	}
	if(Equality==1){
		printf("These matrices are equal.");
	}
	else{
		printf("These matrices are not equal.");
	}
	return 0;
}
