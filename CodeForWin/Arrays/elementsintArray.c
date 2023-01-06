#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//FINDING NEGATIVE ELEMENTS IN ARRAY:
int main(int argc, char *argv[]) {
	int A[ARRAY_SIZE];
	int i;
	for(i=0;i<ARRAY_SIZE;i++){
		printf("Dizinizin %d. elemanini giriniz:",i+1);
		scanf("%d",&A[i]);
	}
	for(i=0;i<ARRAY_SIZE;i++){
		if(A[i]<0){
			printf("Negative elements:%d\n",A[i]);
		}
}
	return 0;
}
