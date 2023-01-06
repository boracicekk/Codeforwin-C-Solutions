#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int A[ARRAY_SIZE];
int B[ARRAY_SIZE];
int s;
int i;
printf("Enter your array's size: ");
scanf("%d",&s);
for(i=0;i<s;i++){
	printf("Enter your %d. elements in array:",i+1);
	scanf("%d",&A[i]);
}
for(i=0;i<s;i++){
	B[i]=A[i];
}
for(i=0;i<s;i++){
	printf("B'nin %d. elemani = %d\n",i+1,B[i]);
}


	return 0;
}
