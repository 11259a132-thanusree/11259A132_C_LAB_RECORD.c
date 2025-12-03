 **Union Example (Student Data) **
**AIM** :

To write a C program that demonstrates the use of a union by storing either an integer (roll number) or a float (marks) in the same memory location.

** ALGORITHM **

Start the program.

Define a union Data with members:

int roll

float marks

Declare a variable d of type union Data.

Assign a value to d.roll and print it.

Assign a value to d.marks and print it.

Observe that assigning a new value overwrites the previous value due to shared memory in a union.

End the program.


**Program** :

#include <stdio.h>
union Data {
int roll;
float marks;
};
int main() {
union Data d;
d.roll = 101;
printf("Roll = %d\n", d.roll);
d.marks = 89.5;
printf("Marks = %.2f\n", d.marks);
return 0;
}

** SAMPLE OUTPUT ** :
  
Roll = 101
  
Marks = 89.50


 ** FINAL RESULT **

The program successfully demonstrates how a union allows storing different data types in the same memory location, and only one member can hold a value at a time.
