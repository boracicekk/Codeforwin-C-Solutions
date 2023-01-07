#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//C program to find second largest number in array

int main(int argc, char *argv[]) {
	int A[ARRAY_SIZE];
	int s;
	int i;
	int max;
	int SecMax;
	printf("Enter your array's size:");
	scanf("%d",&s);
	for(i=0;i<s;i++){
		printf("Enter your %d. element in Array:",i+1);
		scanf("%d",&A[i]);
	}
	for(i=0;i<s;i++){
		if(max<A[i]){
			SecMax=max;
			max = A[i];	
		}
		else if (SecMax<A[i] && max>A[i]){
			SecMax = A[i];
		}
	}
	printf("The second largest number in Array: %d",SecMax);
	
	
	return 0;
}
