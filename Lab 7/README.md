# CS332-Lab7

## Objective
The objective of this lab is to introduce us to create processes and manage them.
- Creating child processes using fork.
- Replacing child processes using exec

## Description
Write a program that takes a filename as a command-line argument and preforms the following steps:
- open the file specified as the command line argument
- read contents of the file one line at a time
- use fork-exec to create a new process that executes the program specified in the input file along with the arguments
- the parent process will make note of the time the program was started 
- then the parent process will wait for the child process to complete and when the child process therminates, the parent process will capture the time the child process completed
- open log file and write the command executed along with arguments provided, start time, and end time seperated by tabs

## Setup
To compile and run this program:

```bash
$ gcc lab7.c -o lab7
$ ./lab4 <commands file> 
```


## Sources

- This lab was inspired by forkexecvp.c example provided by Dr. Puri. Used if-statement implementation and error messages Added comments, time functionality, and function call.
- The ctime usage was inspired by [GeeksforGeeks](https://www.geeksforgeeks.org/ctime-function-in-c-c/).