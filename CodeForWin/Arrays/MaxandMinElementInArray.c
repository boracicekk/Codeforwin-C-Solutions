#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Finding Max and min element in an Array
int main(int argc, char *argv[]) {
	int A[ARRAY_SIZE];
	int s;
	int i;
	int max;
	int min=A[0];
	printf("Enter your array's size:");
	scanf("%d",&s);
	for(i=0;i<s;i++){
		printf("Enter your %d. element in Array:",i+1);
		scanf("%d",&A[i]);
	}
	for(i=0;i<s;i++){
			if(max<A[i]){
				max = A[i];
			}
	}
	for(i=0;i<s;i++){
		if(min>A[i]){
			min = A[i];
		}
	}
	printf("Minimum element in array : %d\n",min);
	printf("Maximum element in array : %d\n",max);
	return 0;
}
