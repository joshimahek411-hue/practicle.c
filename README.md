C Programming Practical Programs
Introduction

This repository contains five basic C programming practicals. These programs help beginners understand important C programming concepts such as arithmetic operations, arrays, functions, loops, pointers, and pattern printing.

Each program is written in C language and includes basic input validation and output statements where required.

Programs Included
1. Simple Calculator Using Switch Case

Description:
This program performs basic arithmetic operations on two integers using a switch statement.

Operations:

Addition (+)
Subtraction (-)
Multiplication (*)
Division (/)

Concepts Used:

Variables and data types
scanf() and printf()
switch-case statement
if-else condition
Arithmetic operators

How It Works:

The user enters two numbers.
The user selects an arithmetic operator.
The switch statement checks the selected operator.
The program performs the corresponding calculation and displays the result.
Division by zero is handled using an if-else condition.

Learning Outcome:
Understand how to use conditional statements to perform different operations based on user input.

2. Sum of Array Elements Using a Function

Description:
This program calculates the sum of all elements in an integer array using a user-defined function named findSum().

Concepts Used:

Arrays
User-defined functions
for loop
Function arguments and return values
Input validation

How It Works:

The user enters the number of array elements.
The program checks whether the array size is between 1 and 100.
The user enters the array elements.
The findSum() function adds all elements of the array.
The function returns the total sum, which is displayed by main().

Learning Outcome:
Learn how to pass an array to a function and return a calculated result.

3. Reverse an Array and Calculate Its Sum

Description:
This program reverses the order of array elements using a function named reverseArray(). It also calculates the sum of the array elements.

Concepts Used:

Arrays
Functions
for loop
Swapping elements using a temporary variable
Array traversal
Basic arithmetic

How It Works:

The user enters the number of elements and their values.
The program calculates the sum while reading the elements.
The reverseArray() function swaps the first element with the last, the second with the second-last, and so on.
The program displays the reversed array.
The sum of the original array elements can also be displayed.

Learning Outcome:
Understand array manipulation, element swapping, and how to reverse an array efficiently.

4. Calculate the Cube of Array Elements Using a Pointer

Description:
This program uses a pointer to access array elements and calculate the cube of each element.

Concepts Used:

Arrays
Pointers
Pointer arithmetic
for loop
Multiplication operator

How It Works:

The user enters the number of array elements.
The user inputs the array values.
The pointer ptr is assigned the starting address of the array.
The expression *(ptr + i) accesses each array element.
The program calculates and displays the cube of every element.

Formula:

Cube of a number = number × number × number

Learning Outcome:
Understand how pointers access array elements and how pointer arithmetic works in C.

5. Number Triangle Pattern Using Nested Loops

Description:
This program prints a triangular pattern of consecutive numbers starting from 11, using nested for loops.

Concepts Used:

Nested for loops
Variables and increment operators
printf() function
Pattern printing

How It Works:

The variable num starts with the value 11.
The outer loop controls the number of rows.
The inner loop prints numbers in each row.
After printing each number, num is incremented by 1.
The program prints five rows of consecutive numbers.

Sample Output:

11
12 13
14 15 16
17 18 19 20
21 22 23 24 25





