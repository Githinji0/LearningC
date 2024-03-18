//a simple calculator using switches
#include <stdio.h>
#include <math.h>

int main()
{
	char operation;
	double num1;
	double num2;
	double result;
	
	printf("Enter the operator(+,-,/,*): ");
	scanf("%c", &operation);
	
	printf("Enter the first number: ");
	scanf("%lf", &num1);
	
	printf("Enter the second number: ");
	scanf("%lf", &num2);
	
	switch(operation)
	{
	case '+':
		result = num1 + num2;
		printf("\nThe result is: %.2lf", result);
		break;
	
	case '-':
		result = num1 - num2;
		printf("The result is: %.2lf", result);
		break;
	
	case '/':
		result = num1 / num2;
		printf("The result is: %.2lf", result);
		break;
	
	case '*':
		result = num1 * num2;
		printf("The result is: %.2lf", result);
		break;
	
	default:
		printf("please enter a valid operator sign!!");
		break;
	}
		
	return 0;
}