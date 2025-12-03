File Handling: Write and Read a File
** AIM ** :

To write a C program that demonstrates file handling by writing text to a file and then reading it back.

** ALGORITHM **

Start the program.

Declare a file pointer FILE *fp and a character array text[100].

Open a file sample.txt in write mode using fopen("sample.txt", "w").

Write text "Hello File!" to the file using fprintf.

Close the file using fclose(fp).

Reopen the file in read mode using fopen("sample.txt", "r").

Read the content of the file into text using fgets.

Print the content of the file.

Close the file.

End the program.


**PROGRAM ** :

#include <stdio.h>
int main() {
FILE *fp;
char text[100];
fp = fopen("sample.txt", "w");
fprintf(fp, "Hello File!");
fclose(fp);
fp = fopen("sample.txt", "r");
fgets(text, 100, fp);
printf("File Content: %s\n", text);
fclose(fp);
return 0;
}



** SAMPLE OUTPUT ** :
  
File Content: Hello File!

** FINAL RESULT **

The program successfully demonstrates writing to a file and reading from a file in C.
  
It writes the string "Hello File!" to sample.txt and reads it back correctly.
