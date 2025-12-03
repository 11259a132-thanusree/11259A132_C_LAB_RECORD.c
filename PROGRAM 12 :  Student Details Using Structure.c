**Student Details Using Structure**
 ** AIM ** : 

To write a C program that stores and displays the details of a student (roll number, name, and marks) using a structure.

** ALGORITHM **

Start the program.

Define a structure Student with members:

int roll

char name[20]

float marks

Declare a variable s of type struct Student.

Prompt the user to enter the roll number, name, and marks of the student.

Read the input using scanf.

Display the student details using printf.

End the program.


**PROGRAM** :

#include <stdio.h>
struct Student {
int roll;
char name[20];
float marks;
};
int main() {
struct Student s;
printf("Enter roll, name and marks: ");
scanf("%d %s %f", &s.roll, s.name, &s.marks);
printf("Student Details:\n");
printf("Roll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
return 0;
}


 ** SAMPLE OUTPUT ** :

Enter roll, name and marks: 101 John 85.5

Student Details:

Roll: 101

Name: John

Marks: 85.50

** FINAL RESULT **

The program successfully demonstrates the use of structures in C by storing and displaying student details, keeping all related information together in a single user-defined data type.

