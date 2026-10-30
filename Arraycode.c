/**
 * @file Arraycode.c
 * @brief Implements all Working Functions (WF2–WF15) for array manipulation.
 *
 * @details
 *  This module contains every low-level operation required for the assignment:
 *  keyboard input, random filling, clearing, sorting, printing, randomizing,
 *  statistics, and counting used elements.
 *
 *  Unused array positions are represented by the `UNUSED` macro (-1), and many
 *  functions operate only on used elements (i.e., values not equal to UNUSED).
 */
#include <stdio.h>
#include <stdlib.h>
#include "Arraycode.h"
#include "utilitycode.h"   // For randomInrange()

/**
 * @brief Fills an array with values entered by the user.
 * Stops when user enters a negative number.
 * @param arr The array to fill.
 * @param size The maximum number of elements.
 * @return The number of used elements.
 */
int fillarrayfromkeyboard(int arr[], int size)// Fill array from keyboard input
{
	int count = 0;// Number of used elements
	int value;// Temporary input value

	for (int i = 0; i < size; i++) {// Loop until array is full
		printf_s("Please enter value #%d: ", i + 1);// Prompt user
        scanf_s("%d", &value);
		if (value < 0) {// Stop on negative input
			arr[i] = UNUSED;// Mark unused
			break;// Exit loop
        }
		arr[i] = value;// Store valid input
		count++;// Increment used count
    }

    // Fill remaining positions with UNUSED
    for (int i = count; i < size; i++)
        arr[i] = UNUSED;

	return count;// Return number of used elements
}

/**
 * @brief Fills an array with random numbers in a range.
 * * @details
 *  Sets all array positions to UNUSED first, then fills the first `size`
 *  positions with random integers between `lower` and `upper`.
 *
 * @param arr   The array to update.
 * @param size  Number of elements to fill.
 * @param lower Lower bound for random numbers.
 * @param upper Upper bound for random numbers.
 * @return The count of used elements.
 */
int fillarraywithRandno(int arr[], int size, int lower, int upper)// Fill array with random numbers
{
	for (int i = 0; i < size; i++)// Initialize all to UNUSED
        arr[i] = UNUSED;

	int count = 0;// Count of used elements
	for (int i = 0; i < size && count < size; i++) {// Fill with random numbers
		arr[i] = randomInrange(lower, upper);// Get random number
        count++;
    }
    return count;
}

/**
 * @brief Clears all elements in an array by setting them to UNUSED.
 *  @param arr  The array to clear.
 * @param size The array capacity.
 */
 
void cleararray(int arr[], int size)// Clear all elements to UNUSED
{
	for (int i = 0; i < size; i++)// Set each element to UNUSED
        arr[i] = UNUSED;
}

/**
 * @brief Sorts used elements of an array in ascending order using bubble sort.
 * @details
 *  Only values not equal to UNUSED are sorted.
 *  Bubble sort is used for simplicity (not efficiency).
 *
 * @param arr  The array to sort.
 * @param size Capacity of the array.
 */
void arraysort(int arr[], int size)// Sort array using bubble sort
{
	int used = arrayusedno(arr, size);// Get number of used elements
	for (int i = 0; i < used - 1; i++) {// Outer loop
		for (int j = 0; j < used - i - 1; j++) {// Last i elements are already sorted
			if (arr[j] > arr[j + 1]) {// Swap if out of order
				SWAP(arr[j], arr[j + 1]);// Swap elements
            }
        }
    }
}

/**
 * @brief Randomly rearranges used elements of the array.
 * @details
 *  Uses Fisher–Yates shuffle on only the used elements.
 *  Unused elements remain at the end of the array.
 *
 * @param arr  The array to shuffle.
 * @param size Array capacity.
 */
void randomizarray(int arr[], int size)
{
	int used = arrayusedno(arr, size);// Count of used elements

    for (int i = used - 1; i > 0; i--) {
		int j = randomInrange(0, i);// Random index from 0 to i
		SWAP(arr[i], arr[j]);// Swap elements
    }
}

/**
 * @brief Prints only used (non-UNUSED) elements of the array.
 * @param arr  Array to print.
 * @param size Capacity.
 *
 * @details Output format:
 *  {n1, n2, n3}
 *  Empty array prints: {}
 */
void printused(int arr[], int size)// Print only used elements
{
    printf_s("{");
	int first = 1;// Flag for first element
    for (int i = 0; i < size; i++) {
		if (arr[i] != UNUSED) {// Only print used elements
			if (!first) printf_s(", ");// Print comma before subsequent elements
			printf_s("%d", arr[i]);// Print element
            first = 0;
        }
    }
    printf_s("}\n");
}

/**
 * @brief Prints all elements, including UNUSED values.
 * @param arr  Array to print.
 * @param size Capacity.
 *
 * @details Output format:
 *  {n1, n2, -1, -1}
 */
void printall(int arr[], int size)// Print all elements including UNUSED
{
    printf_s("{");
	for (int i = 0; i < size; i++) {// Loop through all elements
		printf_s("%d", arr[i]);// Print element
		if (i < size - 1)// Print comma if not last
            printf_s(", ");
    }
    printf_s("}\n");
}

/**
 * @brief Counts how many used elements are in the array.
 * @return Number of used elements.
 */
int arrayusedno(int arr[], int size)// Count used elements
{
	int count = 0;// Count of used elements
    for (int i = 0; i < size; i++) {
		if (arr[i] != UNUSED)// Only count used elements
            count++;
    }
    return count;
}
