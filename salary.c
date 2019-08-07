/*
Ramesh's basic salary is input through the keyboard. 
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. 
Write a program to calculate his gross salary.
*/
#include<stdio.h>

int main(){
	float basic, dearness, rent, gross=0;
	printf("Enter Basic Salary: ");
	scanf("%f", &basic);
	dearness= 0.4*basic;
	rent = 0.2*basic;
	gross = basic + dearness + rent;
	printf("Gross Salary = %f\n", gross); 
}