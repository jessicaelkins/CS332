# CS332-Lab5

## Objective
The objective of this lab is to practice implementing UNIX file system and properties of files.

## Description
Implement a C program that takes a directory name as command-line arguments and traverses the file hierarchy recursively and list all the sub directories and the files in these sub directories.

## Setup
To compile and run this program:
```
$ gcc Lab5.c -o Lab5
$ ./lab5 <directory>
```

Example:
```
$ gcc lab5.c -o lab5
$ ./lab5 .
1. .
2. ..
3. a.out

4. DIR: Directory1
1. .
2. ..
3. fileInsideDirectory1

5. Lab5.c
6. Lab5

```

## Sources

- This lab was inspired by readdir_v2.c example provided by Dr. Puri. Used while-loop implementation and error message if statement. Added comments, put inside fileTraversal function, added snprintf, and changed variable names.
- snprintf usage inspired by [GeeksForGeeks](https://www.geeksforgeeks.org/snprintf-c-library/)

