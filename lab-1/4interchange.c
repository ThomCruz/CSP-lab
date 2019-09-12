/*
# Write a program to exchange content of two integer values without using third variable.
*/
#include <stdio.h>
int main(){
	int num1, num2;
	printf("Enter the first integer value:");
	scanf("%d", &num1);
	printf("Enter the second integer value:");
	scanf("%d", &num2);
	printf("Initial Values num1=%d and num2=%d\n", num1, num2);
	num1 = num1 + num2;  
    num2 = num1 - num2; 
    num1 = num1 - num2;
    printf("Final Values   num1=%d and num2=%d\n", num1, num2);
    return 0;
}