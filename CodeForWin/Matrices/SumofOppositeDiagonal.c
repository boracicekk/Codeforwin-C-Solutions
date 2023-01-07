#include <stdio.h>
#include <stdlib.h>
#define size 3
//C program to find the sum of opposite diagonal elements of a matrix

int main(int argc, char *argv[]) {
	int i,j;
	int sum=0;
	int A[size][size];
	printf("Enter your matrice: \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&A[i][j]);
		}
	}
	  for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(i+j == ((size+1)-2))
            {
                sum += A[i][j];
            }
        }
    }
	printf("Sum of opposite diagonal elements your matrice : %d",sum);
	
	return 0;
}
