/* 
Wap to calculate simple and compound interest when rate, principal and time is given.
*/
#include<stdio.h>
#include<math.h>

int main(){
	float principal, rate, simpleInterest, compoundInterest, compoundInterestAnnual;
	int time, ctimes;
	printf("Enter principal, rate of interest, time in years and number of times compounded:\n");
	scanf("%f %f %d %d", &principal, &rate, &time, &ctimes);
	simpleInterest = principal*(1+0.01*rate*time);
	compoundInterestAnnual = principal*(pow((1+0.01*rate),time)-1);
	compoundInterest = principal*(pow((1+0.01*rate/ctimes),ctimes*time));
	printf("Simple Interest = %f\n",simpleInterest-principal);
	printf("Compound Interest(compounded yearly) = %f\n",compoundInterestAnnual);
	printf("Compound Interest(compounded n-times) = %f\n",compoundInterest-principal);
	return 0;
} 
