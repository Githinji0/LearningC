#include <stdio.h>
#include <ctype.h> //string types

int main()
{
	char symbol;
	float temp;
	symbol = toupper(symbol);// transform to upper case
	
	printf("enter the unit of temp(C/F): ");
	scanf("%c", &symbol);
	//if the user chooses celcius
	if (symbol == 'C'){
		printf("Enter the temperature in celcius: ");
		scanf("%f", &temp);
		temp = (temp * 9 / 5) + 32;// formula
		printf("\nThe temperature in F is: %.2f", temp);
		
	}
	//if the user chooses farenheit
	else if (symbol == 'F')
	{
		printf("enter the temperature in farenheit: ");
		scanf("%f", &temp);	
		temp = ((temp - 32) * 5) / 9;
		printf("The temperature in C is: %.2f", temp);	
	}
	// if none of the above are met
	else
	{
		printf("enter a valid unit!!!");
	}
	
	
	return 0;
}