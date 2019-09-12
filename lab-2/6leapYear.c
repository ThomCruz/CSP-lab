/*
# Write a program to check whether entered year is leap year or not.
*/
#include <stdio.h>
int main(){
	int year;
	printf("Enter a valid year:");
	scanf("%d", &year);
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){ // (either divisble by 400) OR (divisuble by 4 AND NOT divisible by 100)
		printf("%d is a leap year\n",year);
	}
	else{
		printf("%d is not a leap year\n",year);	
	}
	return 0;
}