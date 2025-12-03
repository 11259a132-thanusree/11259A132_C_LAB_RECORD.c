**PROGRAM 6 : Bubble Sort and Insertion sort.c **

  **AIM** : 

To write a C program that sorts a list of numbers in ascending order using the Bubble Sort algorithm.

ALGORITHM

Start the program.

Declare variables n, i, j, and temp.

Ask the user to enter the number of elements n.

Declare an array a[n].

Ask the user to input all n elements of the array.

Use two nested loops to sort the array:

Outer loop runs from i = 0 to n-2.

Inner loop runs from j = 0 to n-i-2.

In each iteration, compare a[j] and a[j+1].

If a[j] > a[j+1], swap them using a temporary variable temp.

After sorting, print the sorted array.

End the program.


**PROGRAM** :

#include <stdio.h>
int main() {
int n, i, j, temp;
printf("Enter number of elements: ");
scanf("%d", &n);
int a[n];
printf("Enter elements: ");
for(i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n-1; i++)
for(j = 0; j < n-i-1; j++)
if(a[j] > a[j+1]) {
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
printf("Sorted array: ");
for(i = 0; i < n; i++)
printf("%d ", a[i]);
return 0;
}


**SAMPLE OUTPUT** :
  
Enter number of elements: 5
  
Enter elements: 20 5 15 10 1
  
Sorted array: 1 5 10 15 20

**FINAL RESULT** :

The program successfully sorts the given list of integers in ascending order using the Bubble Sort algorithm.

**Insertion Sort**

**AIM :**

To write a C program that sorts an array of integers in ascending order using the Insertion Sort algorithm.

**ALGORITHM** :

Start the program.

Declare variables n, i, j, and key.

Ask the user to enter the number of elements n.

Declare an array a[n].

Ask the user to input all n elements of the array.

Perform insertion sort:

Loop from i = 1 to n - 1:

Assign key = a[i].

Set j = i - 1.

While j >= 0 and a[j] > key:

Shift elements: a[j + 1] = a[j].

Decrement j.

Insert key at its correct position: a[j + 1] = key.

After sorting, print the sorted array.

End the program.

**PROGRAM** :

#include <stdio.h>
int main() {
int n, i, j, key;
printf("Enter number of elements: ");
scanf("%d", &n);
int a[n];
printf("Enter elements: ");
for(i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 1; i < n; i++) {
key = a[i];
j = i - 1;
while(j >= 0 && a[j] > key) {
a[j + 1] = a[j];
j--;
}
a[j + 1] = key;
}
printf("Sorted array: ");
for(i = 0; i < n; i++)
printf("%d ", a[i]);
return 0;
}


**SAMPLE OUTPUT** : 
  
Enter number of elements: 6
  
Enter elements: 12 5 8 20 1 10
  
Sorted array: 1 5 8 10 12 20

**FINAL RESULT**

The program successfully sorts the given array in ascending order using the Insertion Sort algorithm, displaying the sorted list as output.
  




  
