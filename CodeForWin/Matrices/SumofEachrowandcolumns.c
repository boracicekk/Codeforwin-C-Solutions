#include <stdio.h>
#include <stdlib.h>
#define size 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0;
	int j=0;
	int sum=0;
	int A[size][size];
	printf("Enter the matrice:\n");
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
			scanf("%d",&A[i][j]);
		}
	}
		for(i=0;i<size;i++){
			sum=0;
			for(j=0;j<size;j++){
				sum+=A[i][j];
		}
		printf("Sum of elements of row %d = %d\n",i+1,sum);
	}
	for(i=0;i<size;i++){
			sum=0;
			for(j=0;j<size;j++){
				sum+=A[j][i];
		}
		printf("Sum of elements of column %d = %d\n",i+1,sum);
	}
	
	return 0;
}
