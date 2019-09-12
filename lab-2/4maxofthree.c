/*
# Write a program that finds maximum number of three numbers.
*/
#include <stdio.h>
int main(){
	int num1, num2, num3, max;
	printf("Enter the first integer value:");
	scanf("%d", &num1);
	printf("Enter the second integer value:");
	scanf("%d", &num2);
	printf("Enter the third integer value:");
	scanf("%d", &num3);
	max = num1>num2 ? (num1>num3? num1:num3) :(num2>num3 ? num2:num3);
	printf("maximum is: %d\n",max);
	return 0;
}