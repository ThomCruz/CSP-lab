/*
# Write aprogram to perform operations and find out final values.
*/
#include <stdio.h>
int main(){
	int x=0, y=6, z=0, t=0;
	x=y--;
	x=x++;
	x=++y;
	t= z++ + ++y;
	t+=8;
	t= z++ + ++z;
	printf("x=%d y=%d z=%d t=%d\n",x,y,z,t);
	return 0;
}