/*
The distance between two cities (in km.) is input through the keyboard. 
Write a program to convert and print this distance in meters, feet, inches and centimeters.
*/
#include<stdio.h>
int main(){
	long kms, meters, cms, feet, inches;
	scanf("%ld", &kms);
	meters = kms*1000;
	cms = kms*1000*100;
	feet = kms* 3280.8;
	inches = kms*39370.08;
	printf("meters = %ld\n", meters);
	printf("centimeters = %ld\n", cms);
	printf("feet = %ld\n", feet);
	printf("inches = %ld\n", inches);	
	return 0;
}