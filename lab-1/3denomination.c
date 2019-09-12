/*
# A cashier has currency notes of denomination 1, 2, 5, 10, 50 and 100. If the amount to be withdrawn
# is input through keyboard. Find the total number of currency notes of each denomination the cashier
# will have to give to the withdrawer.
*/
#include <stdio.h>
int main(){
	int hundred,fifty,ten,five,two,amount;
    printf("enter the amount of money: "); //an integer number
    scanf("%d",&amount);
	hundred=amount/100;
	printf("number of 100 rupees notes: %d\n",hundred);
	amount=amount%100;
	fifty=amount/50;
	printf("number of 50  rupees notes:  %d\n",fifty);
	amount=amount%50;
	ten=amount/10;
	printf("number of 10  rupees notes:  %d\n",ten);
	amount=amount%10;
	five=amount/5;
	printf("number of 5   rupees notes:  %d\n",five);
	amount=amount%5;
	two=amount/2;
	printf("number of 2   rupees notes:  %d\n",two);
	amount=amount%2;
	printf("number of 1   rupees notes:  %d\n",amount);
    return 0;

}