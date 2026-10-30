#ifndef MATHCODE_H
#define MATHCODE_H

/**
 * @file Mathcode.h
 * @brief Declares mathematical helper functions for variance and standard deviation.
 *
 * @details
 *  This module provides the mathematical functions required by the assignment
 *  that are not strictly “array operations” but are closely related to the
 *  statistical working functions (WF11–WF14).
 *
 *  Functions declared here:
 *    - variancearray(): Computes variance of used array elements.
 *    - standevarray(): Computes standard deviation of used elements.
 *
 *  These functions rely on the UNUSED macro to ignore unused positions.
 */

#include <stdio.h>
#include <math.h>
#include "Arraycode.h"

/**
 * @brief Finds the smallest used element in an array.
 * @param arr The array to search.
 * @param size The number of elements in the array.
 * @return The smallest used element.
 * @details
 *  Only values at the beginning of the array (until the first UNUSED) are examined.
 */
int arrayminimum(int arr[], int size);// Find minimum used element

/**
 * @brief Finds the largest used element in an array.
 * @param arr The array to search.
 * @param size The number of elements in the array.
 * @return The largest used element.
 */
int arraymaximum(int arr[], int size);// Find maximum used element

/**
 * @brief Calculates the average (mean) of used elements in an array.
 * @param arr The array to process.
 * @param size The number of elements in the array.
 * @return The average value of used elements.
 * @details
 *  The calculation ignores all UNUSED positions.
 */
double arraysaverage(int arr[], int size);// Calculate average of used elements

/**
 * @brief Calculates the median value of used elements in an array.
 * @param arr The array to process.
 * @param size The number of elements in the array.
 * @return The median value of used elements.
 * @details
 *  A temporary copy of the used values is sorted so the original array is unchanged.
 *  Odd number of elements: middle value  
 *  Even number of elements: average of the two middle values
 */
double arraymedian(int arr[], int size);// Calculate median of used elements

/**
 * @brief Calculates the variance of used elements in an array.
 * @param arr The array to process.
 * @param size The number of elements in the array.
 * @return The variance of used elements.
 * @details
 *  Variance = sum((xi - mean)²) / N
 */
double variancearray(int arr[], int size);// Calculate variance of used elements

/**
 * @brief Calculates the standard deviation of used elements in an array.
 * @param arr The array to process.
 * @param size The number of elements in the array.
 * @return The standard deviation of used elements.
 * @details
 *  Standard deviation = sqrt(variance)
 */
double standevarray(int arr[], int size);// Calculate standard deviation

#endif // MATHCODE_H
