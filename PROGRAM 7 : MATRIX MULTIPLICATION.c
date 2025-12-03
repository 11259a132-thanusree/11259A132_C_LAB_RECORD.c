**Matrix Operations (Addition, Subtraction & Multiplication **


**AIM** :

To write a C program that performs addition, subtraction, and multiplication of two square matrices of size n × n.

**ALGORITHM **
1. Start the program.
2. Input

Read the size of the square matrix n.

Read the elements of matrix A.

Read the elements of matrix B.

3. Matrix Addition

For each element i, j:

C[i][j] = A[i][j] + B[i][j]

Print the resulting matrix.

4. Matrix Subtraction

For each element i, j:

C[i][j] = A[i][j] - B[i][j]

Print the resulting matrix.

5. Matrix Multiplication

For each cell C[i][j] initialize with 0:

Loop through k = 0 to n-1

C[i][j] += A[i][k] * B[k][j]

Print the resulting matrix.

6. End the program.

**PROGRAM**  : 

  #include <stdio.h>
int main() {
int a[10][10], b[10][10], c[10][10], i, j, k, n;
printf("Enter size of square matrix: ");
scanf("%d", &n);
printf("Enter elements of Matrix A:\n");
for(i = 0; i < n; i++)
for(j = 0; j < n; j++)
scanf("%d", &a[i][j]);
printf("Enter elements of Matrix B:\n");
for(i = 0; i < n; i++)
for(j = 0; j < n; j++)
scanf("%d", &b[i][j]);
// Addition
printf("\nAddition of Matrices:\n");
for(i = 0; i < n; i++) {
for(j = 0; j < n; j++) {
c[i][j] = a[i][j] + b[i][j];
printf("%d ", c[i][j]);
}
printf("\n");
}
// Subtraction
printf("\nSubtraction of Matrices:\n");
for(i = 0; i < n; i++) {
for(j = 0; j < n; j++) {
c[i][j] = a[i][j] - b[i][j];
printf("%d ", c[i][j]);
}
printf("\n");
}
// Multiplication
printf("\nMultiplication of Matrices:\n");
for(i = 0; i < n; i++) {
for(j = 0; j < n; j++) {
c[i][j] = 0;
for(k = 0; k < n; k++)
c[i][j] += a[i][k] * b[k][j];
printf("%d ", c[i][j]);
}
printf("\n");
}
return 0;
}


  
**SAMPLE OUTPUT **
Enter size of square matrix: 2
Enter elements of Matrix A:
1 2
3 4
Enter elements of Matrix B:
5 6
7 8

Addition of Matrices:
6 8 
10 12 

Subtraction of Matrices:
-4 -4 
-4 -4 

Multiplication of Matrices:
19 22 
43 50

FINAL RESULT

The program successfully accepts two square matrices from the user and correctly performs:

✔ Matrix Addition
✔ Matrix Subtraction
✔ Matrix Multiplication

All results are displayed in matrix form
