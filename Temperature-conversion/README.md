# Temperature Conversion

This program converts temperature from Celsius to Fahrenheit and vice versa.

## Usage

To use the program, compile it with the following command:

gcc conversion.c -o conversion


Then, run the program with the following command:

./conversion

The program will prompt you to enter the temperature and the unit (C or F). The converted temperature will be displayed on the console.

### Example
Is the temperature in (F) or (C)? C

Enter the temp in Celcius: 20

The temp in Farenheight is 68.0

### Notes
The program uses the toupper() function to ensure that the input by the user is in upper case. This is necessary because the if statements only work with uppercase letters.
The program assumes that the user enters a valid temperature. If the user enters an invalid temperature, the program will not output anything.

### Author
This program was created by Collins Kimotho.