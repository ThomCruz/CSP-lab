/*
# Write a program to find maximum from give two numbers using conditional operator.
*/
#include <stdio.h>
int main(){
	int num1, num2, max;
	printf("Enter the first integer value:");
	scanf("%d", &num1);
	printf("Enter the second integer value:");
	scanf("%d", &num2);
	max = num1>=num2?num1:num2;
	printf("The maximum number is :%d\n", max);
	return 0;
}