#include<stdio.h>

int main(){

	int sum = 0, i = 1, number;
	
	printf("Enter a Number: ");
	scanf("%d",&number);

	while ( i <= number ){
		sum += i;
		i++;
	}
	
	printf("Sum: %d\n", sum);

	return (0);
}
