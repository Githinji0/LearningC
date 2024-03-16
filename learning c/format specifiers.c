#include <stdio.h>
int main()
{
	//they define the format of type of data to be displayed
	
	//%c = character
	 //%s = a string or array of characters
	 //%f = float [decimals]
	 //%lf = double
	 //%d = integer*/
	 
	 //%.1 = decimal precision
	 //%1 = minnimam field width
	 //%- = left allign
	 float item1 = 5.5;
	 float item2 = 20.5;
	 float item3 = 370.5;
	 
	 printf("item 1: $%.3f\n", item1);
	 printf("item 2: $%.3f\n", item2);
	 printf("item 3: $%.3f\n", item3);
	return 0;
}