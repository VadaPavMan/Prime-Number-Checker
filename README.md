# Prime-Number-Checker

## Problem: write a program to find whether the number entered by the user is prime or not using the loops.

#
This repository contains a simple C program to check if a given number is a prime number or not.

## About the Project
A prime number is a number that is only divisible by 1 and itself. This program takes an integer as input and determines whether it is a prime number using an efficient algorithm that only checks divisibility up to the square root of the number.

## How It Works
The program:

- Prompts the user to input an integer.
- If the input number is less than or equal to 1, the program outputs that it is not a prime number.
- For numbers greater than 1, the program uses a loop to check divisibility by numbers from 2 to the square root of the input number.
- If a divisor is found within this range, the number is declared as "not prime". Otherwise, it is declared as "prime".

## Key Features:
- Efficient algorithm for checking prime numbers by limiting checks up to the square root.
- Handles edge cases like numbers less than 2 (which are not prime).
- Simple and user-friendly input/output interface.

# Example
```
Input:
Enter the number: 10
Output:
The number is not a prime number.
```
