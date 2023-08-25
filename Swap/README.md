# Swap two variables in C

This code swaps the values of two variables, x and y. It works by first creating a temporary variable temp and storing the value of x in it. Then, the value of x is assigned to y, and the value of temp is assigned to x.

## Usage

To use this code, first compile it using the following command:

gcc swap.c -o swap
Then, run the program using the following command:

./swap
The program will print the following output:

x = Y
y = X

## Notes

The #include <stdio.h> and #include <string.h> lines are required to use the printf() and strcpy() functions.
The char temp; line declares a temporary variable of type char.
The temp = x; line stores the value of x in the temporary variable temp.
The x = y; line assigns the value of y to x.
The y = temp; line assigns the value of the temporary variable temp to y.

## Related terms

C programming
Variable swapping
Temporary variable
printf() function
strcpy() function

## Next steps

You can try to swap the values of two integers.
You can try to swap the values of two strings of different lengths.
You can try to swap the values of two arrays.
