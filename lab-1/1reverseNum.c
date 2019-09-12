/* 
# If a five-digit number is input through keyboard, write a program to reverse the number to determine
# whether the original and reversed number are equal or not.
*/
#include<stdio.h>
int main(){
	int num,d1,d2,d3,d4,d5,renum,sum;
	printf("Enter a five digit number:");
	scanf("%d",&num);
	d1=num/10000;
	d2=(num%10000)/1000;
	d3=(num%1000)/100;
	d4=(num%100)/10;
	d5=num%10;
	renum=d5*10000+d4*1000+d3*100+d2*10+d1;
	printf("Reverse number:%d\n",renum);
	return 0;
} 