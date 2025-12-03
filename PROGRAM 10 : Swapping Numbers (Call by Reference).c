
**Swapping Numbers (Call by Reference)**
**AIM** :

To write a C program that swaps two numbers using call by reference, demonstrating that passing addresses allows the function to modify the actual values in the calling function.

**ALGORITHM**

Start the program.

Define a function swap(int *a, int *b) that:

Stores *a in a temporary variable temp.

Assigns *b to *a.

Assigns temp to *b.

In the main() function:

Declare two integers x and y and initialize them.

Call swap(&x, &y) and pass the addresses of x and y.

After returning from the function, print the values of x and y.

End the program.

**PROGRAM** :

#include <stdio.h>
void swap(int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}
int main() {
int x = 10, y = 20;
0012,1002
swap(&x, &y);
printf("After swap: x=%d y=%d\n", x, y);
return 0;
}


***SAMPLE OUTPUT*** :

After swap: x=20 y=10

**FINAL RESULT** :

The program successfully demonstrates call by reference.
The values of variables x and y are actually swapped because their addresses were passed to the function, allowing direct modification of the original variables
