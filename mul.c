#include<stdio.h>


int main(){

	int i, j, n;

	printf("Enter a Number: ");
	scanf("%d", &n);

	for(i = 1; i <= 10; i++){
		
		printf("%d * %d = %d\n", i, n, i * n);
	}
	
	return (0);
}
