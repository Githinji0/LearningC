#include <stdio.h>

// variable = allocated space and memory to store a value

int main()
{
	int X; //declaration
	X = 123; // initialization
	int y = 213; // declaration + initialization
	
	int age = 20; //integer %d store whole numbers btwn 2bn
	unsigned int pi = 28736282929; //4 byte memory ud%
	
	long long int we = 127273728198298; //8byte memory %lld
	unsigned long long int wer = 1287297;// 8byte ulld%
	float gpa = 1.6; //4 bit floating poiny numbers %f
	char grade = 'C'; //single character %c
	char name[] = "will"; // array of characters %s
	double d = 12.222222 // this is 8byte %lf
	unsigned char y = 255; //%c
	
	short int h = 12345; //2 byte range is
	unsigned short int u = 67265;// 2 byte %d
	
	bool e = true; // 1  byte %d 
	
	printf("hello %s\n", name);
	printf("you are %d years old\n", age);
	printf("your average grade is %c\n", grade);
	
	return 0;
}