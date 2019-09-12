/*
# Write a program to find total memory requirements for give variable initialization using sizeof operator
*/
#include <stdio.h>
int main(){
	unsigned int space=0;	
	printf("COMPILER DETAILS\n");
	printf("int takes: %ld bytes\n",sizeof(int));
	printf("float takes: %ld bytes\n",sizeof(float));
	printf("char takes: %ld bytes\n",sizeof(char));
	printf("double takes: %ld bytes\n",sizeof(double));
	space= space +2*sizeof(int)+ sizeof(float) + 2*sizeof(double) + sizeof(char);
	printf("Total Space required to store given variables is %d\n",space );
	return 0;
}