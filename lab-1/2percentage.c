/*
# In a town, percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men
# is 35 of the population. Write a program to find the total number of illeterate men and women if population of 
# the town is 80000.  
*/
#include <stdio.h>
int main(){
	long t,m,w,lm,lw,l,im,iw;
	t=80000;
	m=80000*52/100;
	w=t-m;
	lm=t*35/100;
	l=t*48/100;
	lw=l-lm;
	im=m-lm;
	iw=w-lw;
	printf("Total population = %ld\n",t);
	printf("Total men = %ld\n",m);
	printf("Total women = %ld\n",w);
	printf("Total literate men = %ld\n",lm);
	printf("Total  literate women = %ld\n",lw);
	printf("Total illiterate men = %ld\n",im);
	printf("Total illiterate women = %ld\n",iw);
	return 0;
}
