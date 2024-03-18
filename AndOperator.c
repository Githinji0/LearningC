#include <stdio.h>
#include <stdbool.h>
// they are: and, not , or
int main()
{
	float temp = 30; //change accordingly
	bool sunny = false; //change accordingly
	
	if (temp >= 0 && temp <= 32 && sunny == true){
		printf("\nNice weather were having!");
	}
	
	else
	{
		printf("Bad weather were  having!");
	}
	
	return 0;
}