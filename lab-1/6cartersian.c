/*
# Write a program to recieve cartesian co-ordinates(x,y) of a point and convert them into polar coordinates (r,q).
*/
#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main()
{
	 float x, y, r, theta;
	 printf("Enter cartesian coordinate x: ");
	 scanf("%f", &x);
	 printf("Enter cartesian coordinate y: ");
	 scanf("%f", &y);
	 /* Calculating r */
	 r = sqrt(x*x + y*y);
	 /* Calculating theta in radian */
	 theta = atan(y/x);
	 /* Converting theta from degree to radian */
	 theta = 180.0 * theta/ PI;
	 printf("Polar coordinate: r = %0.2f and theta = %0.2f in degree", r, theta);
	 return 0;
}