#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[ARRAY_SIZE];
	int i;
	int s;
	int even=0;
	int odd=0;
	printf("Enter your array's size:");
	scanf("%d",&s);
	for(i=0;i<s;i++){
		printf("Enter your %d. element in Array:",i+1);
		scanf("%d",&A[i]);
	}
	for(i=0;i<s;i++){
		if(A[i]%2==0 || A[i]==0){
			even++;
		}
	}
		for(i=0;i<s;i++){
		if(A[i]%2!=0){
			odd++;
	}
}
printf("Your even numbers: %d\n",even);
printf("Your odd numbers: %d\n",odd);
	return 0;
}
