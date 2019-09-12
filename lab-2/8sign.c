/*
# Write a program that check input number is positive, negative or zero.
*/
#include<stdio.h>
int main(){
	int num;
	printf("Enter a integer value:");
	scanf("%d", &num);
	if (num > 0) 
        printf("%d is positive.", num); 
    else if (num < 0) 
        printf("%d is negative.", num); 
    else if (num == 0) 
        printf("number is zero.", num); 
 	return 0;
}