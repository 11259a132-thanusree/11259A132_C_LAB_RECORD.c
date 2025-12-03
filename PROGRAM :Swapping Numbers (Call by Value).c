**Swapping Numbers (Call by Value)**


**AIM** :

To write a C program that demonstrates call by value, showing that changes made to function parameters inside a function do not affect the actual variables in the calling function.

**ALGORITHM** :

Start the program.

Define a function swap(int a, int b):

Declare a temporary variable temp.

Swap the values of a and b.

Print the swapped values inside the function.

In the main() function:

Declare two integers x and y.

Call the function swap(x, y).

After the function call, print the values of x and y.

End the program.


**PROGRAM** :

Swapping Numbers (Call by Value)
#include <stdio.h>
void swap(int a, int b) {
 int temp = a;
 a = b;
 b = temp;
 printf("Inside function (Call by Value): a=%d b=%d\n", a, b);
}
int main() {
 int x = 10, y = 20;
 
 swap(x, y);
 printf("Outside function: x=%d y=%d\n", x, y);
 return 0;
}

  

**SAMPLE OUTPUT** :
  
Inside function (Call by Value): a=20 b=10
  
Outside function: x=10 y=20

**FINAL RESULT** :

The program successfully demonstrates call by value.
Even though the values are swapped inside the function, the original variables x and y remain unchanged outside the function because only copies of the variables are passed
