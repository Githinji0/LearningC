#include <stdio.h>
#include <math.h>

int main()
{
	//defining variables
	const double Pi = 3.142;
	double radius;
	double circumference;
	double area;
	
	
	printf("Enter the radius of the circle:");
	scanf("%lf", &radius);
	
	circumference = Pi * radius * 2;
	area = Pi * radius * radius;
	
    printf("Circumference is : %.3lf", circumference);
    printf("\nThe area is: %.3lf", area);
	return 0;
}