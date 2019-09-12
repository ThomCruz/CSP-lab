/*
# Write a program that checks whether input number is divisible by 5 or not.
*/
#include <stdio.h>
int main(){
	int num;
	printf("Enter a integer value:");
	scanf("%d", &num);
	if(num%5==0){  // %(modulus) function returns remainder
		printf("%d is divisible by 5\n",num);
	}
	else{
		printf("%d is not divisible by 5\n",num);
	}
	return 0;
}	