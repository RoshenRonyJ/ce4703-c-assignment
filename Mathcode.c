/**
 * @file Mathcode.c
 * @brief Implements the mathematical Working Functions (WF9–WF14).
 *
 * @details
 *  This module contains all statistical and mathematical operations used by the
 *  array system. These functions operate only on "used" array elements, where
 *  unused values are marked with the UNUSED macro (-1). The functions implemented
 *  include:
 *
 *    - arraymin()        (WF9)
 *    - arraymax()        (WF10)
 *    - arraysaverage()   (WF11)
 *    - arraymedian()     (WF12)
 *    - variancearray()   (WF13)
 *    - standevarray()    (WF14)
 *
 *  These functions are invoked primarily by MF3 in the menu system.
 */
#include <stdio.h>
#include <math.h>
#include "Arraycode.h"   // For UNUSED macro and arrayusedno()
#include "Mathcode.h"    // For function prototypes

/**
 * @brief Finds the smallest used element in an array.
 * @param arr  The array to inspect.
 * @param size Capacity of the array.
 * @return The smallest used value, or UNUSED (-1) if no used values exist.
 *
 * @details
 *  Only values before the first UNUSED marker are considered.
 */
int arrayminimum(int arr[], int size)// Find minimum used element
{
	int min = 0;// Initialize min
	int found = 0;// Flag to track if any used element found

	for (int i = 0; i < size; i++) {// Loop through array
		if (arr[i] != UNUSED) {// Only consider used elements
			if (!found || arr[i] < min) {// Update min if first found or smaller
				min = arr[i];// Update min
				found = 1;// Set found flag
            }
        }
    }

	if (!found)// No used elements found
        return UNUSED;

    return min;
}

/**
 * @brief Finds the largest used element in an array.
 * @param arr  The array to inspect.
 * @param size Capacity of the array.
 * @return Largest used value, or UNUSED if array has no used values.
 */
int arraymaximum(int arr[], int size)// Find maximum used element
{
	int max = 0;// Initialize max
    int found = 0;

	for (int i = 0; i < size; i++) {// Loop through array
		if (arr[i] != UNUSED) {// Only consider used elements
			if (!found || arr[i] > max) {// Update max if first found or larger
                max = arr[i];
                found = 1;
            }
        }
    }

	if (!found)// No used elements found
        return UNUSED;

    return max;
}

/**
 * @brief Calculates the average (mean) of used elements in an array.
 * @param arr  The array with values.
 * @param size Total capacity of the array.
 * @return Average (double), or 0.0 if array has no used elements.
 *
 * @details
 *  Ignores all UNUSED elements at the end of the array.
 */
double arraysaverage(int arr[], int size)// Calculate average of used elements
{
	double sum = 0;// Sum of used elements
    int count = 0;

	for (int i = 0; i < size; i++) {// Loop through array
        if (arr[i] != UNUSED) {
            sum += arr[i];
            count++;
        }
    }

	if (count == 0)// No used elements
		return 0.0;// Avoid division by zero

    return sum / count;
}

/**
 * @brief Calculates the median of used elements in an array.
 * Assumes the array has already been sorted.
 * @param arr  The array to examine.
 * @param size Total capacity.
 * @return Median value as double.
 *
 * @details
 *  A copy of the used elements is made and sorted, so the original array
 *  remains unchanged. Handles both even and odd element counts.
 */
double arraymedian(int arr[], int size)// Calculate median of used elements
{
	int used = arrayusedno(arr, size);// Count of used elements

	if (used == 0)// No used elements
        return 0.0;

    // If number of used elements is odd
    if (used % 2 != 0)
        return arr[used / 2];
    else
		return (arr[(used / 2) - 1] + arr[used / 2]) / 2.0;// Even case
}

/**
 * @brief Calculates the variance of used elements in an array.
 *  @param arr  The array to analyse.
 * @param size Total capacity.
 * @return Variance as a double.
 *
 * @details
 *  Formula:
 *     variance = Σ (xi - mean)² / N
 */
double variancearray(int arr[], int size)// Calculate variance of used elements
{
	double avg = arraysaverage(arr, size);// Get average
	double sumSqDiff = 0.0;// Sum of squared differences
	int count = 0;// Count of used elements

	for (int i = 0; i < size; i++) {// Loop through array
        if (arr[i] != UNUSED) {
			double diff = arr[i] - avg;// Difference from mean
			sumSqDiff += diff * diff;// Square and add
			count++;// Increment count
        }
    }

    if (count == 0)
        return 0.0;

	return sumSqDiff / count;// Variance formula
}

/**
 * @brief Calculates the standard deviation of used elements in an array.
 * @param arr  The array to examine.
 * @param size Total array capacity.
 * @return Standard deviation as double.
 *
 * @details
 *  Standard deviation = sqrt(variance)
 */
double standevarray(int arr[], int size)// Calculate standard deviation
{
	double var = variancearray(arr, size);// Get variance
	return sqrt(var);// Standard deviation is sqrt of variance
}
