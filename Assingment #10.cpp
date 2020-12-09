/*Ezigbo Ugochukwu 10/15/2020 Assignment #10 This program determines the quadrant of a given point on the Cartesian plane*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{
	/*declare variables*/
	float x, y;
	
	/*Enter input variables*/
	printf("Enter the x y coordinate on a Cartesian Plane");
	scanf("%f %f", &x, &y);
	
	/*Compute result*/
	if (x<0 && y>0)
		printf("(%f,%f) is in quadrant II.\n", x, y);
	else if(x<0 && y<0)
		printf("(%f,%f) is in quadrant III.\n", x, y);
	else if (x>0 && y<0)
		printf("(%f,%f) is in quadrant IV.\n", x, y);
	else if (x==0 && y!=0)
		printf("(%f,%f) is on the y-axis.\n", x, y);
	else if (x!=0 && y==0)
		printf("(%f,%f) is on the x-axis.\n", x, y);
	else if (x==0 && y==0)
		printf("(%f,%f) is on the origin.\n", x, y);
	else
		printf("(%f,%f) is in quadrant I.\n", x, y);
		
	return 0;
}

/*Enter the x y coordinate on a Cartesian Plane0 0
(0.000000,0.000000) is on the origin.
Enter the x y coordinate on a Cartesian Plane-2 -4
(-2.000000,-4.000000) is in quadrant III.*/
