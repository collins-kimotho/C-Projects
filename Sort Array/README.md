# Bubble Sort in C

This program implements the bubble sort algorithm to sort an array of integers.

## Algorithm

The bubble sort algorithm works by repeatedly comparing adjacent elements in the array and swapping them if they are in the wrong order. The algorithm starts at the beginning of the array and compares the first two elements. If the first element is greater than the second element, they are swapped. The algorithm then moves on to the next two elements and repeats the process. This continues until the end of the array is reached.

## Implementation

The following code implements the bubble sort algorithm in C:

The sort() function takes two arguments: the array to be sorted and the size of the array. The function works by first initializing a variable i to 0. Then, it enters a loop that iterates from i to size - 2. Inside the loop, it initializes a variable j to 0. Then, it enters a nested loop that iterates from j to size - i - 2. Inside the nested loop, it compares the elements at index j and j + 1 of the array. If the element at index j is greater than the element at index j + 1, the function swaps the two elements.

## Usage

To use this program, first compile it using the following command:

gcc bubble_sort.c -o bubble_sort
Then, run the program using the following command:

./bubble_sort
The program will print the sorted array.

## Related terms

- Bubble sort
- Sorting algorithm
- C programming

## Author

This program was writen by Collins Kimotho.
