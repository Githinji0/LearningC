#include <stdio.h>

// are used instead of else if statements

int main()
{
	char grade;
	
	printf("enter your grade: ");
	scanf("%c", &grade);
	
	switch(grade )
	{
	case 'A':
		printf("exellent");
		break;
	
	case 'B':
		printf("awesome");
		break;
		
    case 'C':
    	printf("average");
    	break;// exiting out of the switch
    	
    case 'D':
    	printf("pass");
    	break;
    
    case 'F':
    	printf("you failed");
    	break;
    
	default: //if none is met
		printf("error enter a valid grade");
		break;
	}
	
	
	return 0;
}