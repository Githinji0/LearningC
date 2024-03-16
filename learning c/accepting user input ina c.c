#include <stdio.h>

int main()
{
	char name[19];
	
	printf("%s", &name);
	int age;
	printf("\nhello how old are you");
	scanf("%d", &age);
	
	printf("you are %d years old", age);
	return 0;
}