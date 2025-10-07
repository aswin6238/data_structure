#include<stdio.h>

int main(){

	int n, i = 1;
	float average = 0, sum = 0;

	printf("Enter a Number: ");
	scanf("%d", &n);

	do{

		sum += i;
		i++;

	}while(i <= n);


	average = sum / n;
	

	printf("Average: %.2f\n", average);	

	return (0);

}
