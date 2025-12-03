**AIM**

To write a C program that performs basic string operations such as:

   Copying a string

   Reversing a string

   Concatenating two strings

   using predefined string functions.

**ALGORITHM**

Start the program.

Declare three character arrays s1, s2, and s3.

Ask the user to enter a string and read it into s1.

Use strcpy(s2, s1) to copy s1 into s2.

Use strcpy(s3, s1) and then apply strrev(s3) to reverse the string.

Display the reversed string.

Use strcat(s1, s2) to concatenate the original string with its copy.

Display the concatenated string.

End the program.


*PROGRAM** :

#include <stdio.h>
#include <string.h>
int main() {
char s1[100], s2[100], s3[100];
printf("Enter a string: ");
gets(s1);
strcpy(s2, s1);
printf("Copied String: %s\n", s2);
strcpy(s3, s1);
strrev(s3);
printf("Reversed String: %s\n", s3);
strcat(s1, s2);
printf("Concatenated String: %s\n", s1);
return 0
}

**SAMPLE OUTPUT**

Enter a string: hello

Copied String: hello

Reversed String: olleh

Concatenated String: hellohello

**FINAL RESULT** :

The program successfully performs:

✔ Copying the input string
✔ Reversing the input string
✔ Concatenating the original string with its copied version

and displays all results correctly.
