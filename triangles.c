#include <stdio.h>
#include <math.h>
// calculating the hypo of a triangle
int main()
{
	double height;
	double base;
	double hyp;
	
	printf("Enter the height:");
	scanf("%lf", &height);
	
	printf("Enter the base: ");
	scanf("%lf", &base);
	
	hyp = sqrt(height*height + base*base);
	
	printf("The hyp is: %lf", hyp);
	
	return 0;
}