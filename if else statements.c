#include <stdio.h>

int main()
{
	int age;
	
	printf("how old are you? ");
	scanf("%d", &age);
	
	if (age >= 18) {
		printf("welcome");
	}
	else if(age < 0)
	{
		printf("error in age");
	}
	else
	{
		printf("sorry");
	}
	return 0;
}