#include <stdio.h>
#include <stdbool.h>
// The Or( || ) checks if aleast one conditionis true
int main()
{

	float Temp;
	
	printf("what is the temperature? ");
	scanf("%f",&Temp);
	
	if (Temp <= 0 || Temp >= 32){
		printf("the teperature if modest");
	}
	
	else
	{
		printf("the temperature is uncondusive");
	}
		
	return 0;
}