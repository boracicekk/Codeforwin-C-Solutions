#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//C program to find sum of array elements
int main(int argc, char *argv[]) {
	int A[ARRAY_SIZE];
	int s;
	int sum=0;
	int i;
	printf("Enter your array's size:");
	scanf("%d",&s);
	for(i=0;i<s;i++){
		printf("Enter your array's %d. element:\n",i+1);
		scanf("%d",&A[i]);
	}
	for(i=0;i<s;i++){
		sum += A[i];
	}
	printf("Sum of array elements: %d",sum);
	return 0;
}
