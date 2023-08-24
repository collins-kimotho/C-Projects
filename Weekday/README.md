## Description

This program takes an integer between 1 and 7 as input and prints whether the number is a weekday or a weekend.

## Usage

To use this program, compile it with the following command:

gcc -o weekday_or_weekend weekday_or_weekend.c

Then, run the program with the following command:

./weekday_or_weekend

The program will prompt you to enter a number between 1 and 7. Enter the number and press Enter. The program will then print whether the number is a weekday or a weekend.

### Example

Enter a number between 1 to 7: 5

Weekday

### Notes

The program assumes that the user will enter a valid number between 1 and 7. If the user enters an invalid number, the program will print the message "Invalid Number".
The program uses the switch statement to check the value of the input number.
The case statements in the switch statement print the appropriate message.
The default statement prints the message "Invalid Number" if the input number is not between 1 and 7.
The program is written in C and uses the stdio.h header file.

### Author

This program was written by Collins Kimotho
