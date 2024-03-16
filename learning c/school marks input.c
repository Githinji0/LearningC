#include <stdio.h>

int main() {
    char name[50];
    int english, kiswahili, maths, phyc, chem;
    int totalMarks;
    float avgMarks;
    char grade;

    // Input student details
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter marks in English: ");
    scanf("%d", &english);

    printf("Enter marks in Kiswahili: ");
    scanf("%d", &kiswahili);

    printf("Enter marks in Mathematics: ");
    scanf("%d", &maths);
    
     printf("Enter marks in physics: ");
    scanf("%d", &phyc);
    
     printf("Enter marks in chemistry: ");
    scanf("%d", &chem);



    // Calculate total marks
    totalMarks = english + kiswahili + maths + phyc + chem;

    // Calculate average marks
    avgMarks = (float) totalMarks / 5;

    // Display student's details
    printf("\nStudent Name: %s", name);
    
    printf("English Marks: %d\n", english);
    
    printf("Kiswahili Marks: %d\n", kiswahili);
    
    printf("Mathematics Marks: %d\n", maths);
    
    printf("physics marks: %d\n", phyc);
    
    printf("chemistry marks: %d\n", chem);
    
    printf("Total Marks: %d\n", totalMarks);
    
    printf("Average Marks: %.2f\n", avgMarks);

    return 0;
}
