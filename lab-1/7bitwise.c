/*
# Write a program to perform bit-wise operator on two values.
*/
#include <stdio.h>
int main(){
	int num1, num2;
	printf("Enter the first integer value:");
	scanf("%d", &num1);
	printf("Enter the second integer value:");
	scanf("%d", &num2);
	printf("num1 & num2 = %d\n", num1&num2);
	printf("num1 | num2 = %d\n", num1|num2);
	printf("num1 ^ num2 = %d\n", num1^num2);
	printf("num1>>2 = %d\n", num1>>2);
	printf("num1<<2 = %d\n", num1<<2);
	printf("!num1 = %d\n", !num1);
	return 0;
}