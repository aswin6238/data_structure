#include<stdio.h>


int add(int a, int b){

	return a + b;
}


int main(){

	int a, b, result;


	printf("Enter Two Numbers: ");
	scanf("%d%d",&a,&b);

	result = add(a,b);

	printf("Result: %d\n",result);


	return (0);
}

