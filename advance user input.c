#include <stdio.h>

int main(int argc, char** argv)
{
	char name[20];
	int age;
	
	printf("what is your name? ");
    //scanf("%s", &name);
	fgets(name, 20, stdin); //reads blank spaces
	
	printf("how old are you? ");
	scanf("%d", &age);
	
	printf("hello %s how are you? ", name);
	printf("you are %d years old", age);
	
	return 0;
}