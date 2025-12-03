**Accessing Array Elements Using Pointer**
 ** AIM ** :

To write a C program that demonstrates accessing elements of an array using a pointer.

** ALGORITHM **

Start the program.

Declare and initialize an array arr[5] = {10, 20, 30, 40, 50}.

Declare a pointer p and assign it the base address of the array (p = arr).

Use a for loop from i = 0 to 4:

Access the array element using pointer arithmetic: *(p + i).

Print the value.

End the program.


**PROGRAM **

#include <stdio.h>
int main() {
int arr[5] = {10, 20, 30, 40, 50};
int *p = arr;
for (int i = 0; i < 5; i++) {
printf("Value = %d\n", *(p + i));
}
return 0;
}


** SAMPLE OUTPUT ** :

Value = 10

Value = 20

Value = 30

Value = 40

Value = 50

** FINAL RESULT **

The program successfully demonstrates how a pointer can be used to access the elements of an array using pointer arithmetic, instead of directly using array indices.
