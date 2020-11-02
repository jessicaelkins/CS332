# CS332-Lab4

## Objective
The objective of this lab is to practice implementing UNIX file I/O functions such as open, read, write, and close.

## Description
Implement a C program that takes two filenames as command-line arguments and concatenates the contents of the second file to the first file. The program should check if the two file names provided as command-line arguments are the same and print an error message. After the program executes successfully, the first file should now contain it's original content and the contents of the seconds file. The second file should be unchanged.

## Setup
To compile and run this program:
```
$ gcc lab4.c -o lab4
$ ./lab4 <destination file> <source file>
```

Example:
```
$ cat file1.txt
Hello World! This is file one!
$ cat file2.txt
Hello World! This is file two!
$ gcc lab4.c -o lab4
$ ./lab4 file1.txt file2.txt
$ cat file1.txt
Hello World! This is file one!
Hello World! This is file two!
$ cat file2.txt
Hello World! This is file two!
$
```

## Sources

- This lab was inspired by filecopy.c example provided by Dr. Puri. Used while-loop implementation and error message if statement. Added comments, changed buffer size, changed varibal names, and added append flag inside open call. 

