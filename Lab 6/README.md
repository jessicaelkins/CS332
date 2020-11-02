# CS332-Lab6

## Objective
The objective of this lab is to practice implementing Standard I/O libraries and streams.

## Description
This program reads the input file "listings.csv" and implements two functions that sort it by host name and by price and create two new csv files, "listingsHostName.csv" and "listingsPrice.csv".

## Setup
To compile and run this program:
```
$ gcc lab6.c -o lab6
$ ./lab6
```

## Sources

- This lab was inspired by listing.c example provided by Dr. Puri.
- qsort() implementation was learned from UNIX man pages and funcptr2.c example given by Dr. Puri.