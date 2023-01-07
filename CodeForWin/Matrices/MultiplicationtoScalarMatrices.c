#include <stdio.h>
#include <stdlib.h>
#define size 3
//C program to perform Scalar matrix multiplication

int main(int argc, char *argv[]) {
	int i,j,m;
	int A[size][size];
	int SONUC[size][size];
	printf("Enter to multiplication value: \n");
	scanf("%d",&m);
	printf("Enter your matrice's values: \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			SONUC[i][j]=m * A[i][j];
		}
	}
	printf("Sonuc : \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",SONUC[i][j]);
		}
		printf("\n");
	}
	return 0;
}
