#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utilitycode.h" 
#include "arraycode.h"  
#include "Mathcode.h"
#include "menu.h"

/**
 * @brief Program entry point.
 * Initializes the system and starts the menu.
 */
int main()
{
    {
        srand((unsigned)time(NULL));  // initializing  random number generator
        printf_s("=== CE4703 Assisment 1 ===\n");
        printf_s("Developed by: [Roshen Rony Jacob / 24306444]\n\n");
        //---------------------------- WF1 ------------------------
        // Generate a random number between 10 and 20;
        //int num = randomInrange(10, 20);
        //printf("Random number between 10 and 20: %d\n", num);

        //return 0;
    }
    //---------------------------- WF2 ------------------------
    //int numbers[5];
    //int count = fillarrayfromkeyboard(numbers, 5);

    //printf("\nYou entered:\n");

    //for (int i = 0; i < count; i++){
       // printf("%d ", numbers[i]);
    //}
    //return 0;
    //---------------------------- WF3 ------------------------
    //int randomnum[5];
    //int randnoarray = fillarraywithRandno(randomnum, 5, 20, 30);

    //printf("\nRandom numbers between 20 and 30:\n");
    //for (int i = 0; i < randnoarray; i++){
    //   printf("%d ", randomnum[i]);
    //}
    //return 0;
    //}
    //---------------------------- WF4 ------------------------
   // int randomnum[5] = { 10, 20, 30, 40, 50 };
   // printf("Before clearing:\n");
    //for (int i = 0; i < 5; i++) {
    //    printf("%d ", randomnum[i]);
    //}
    //printf("\n");

    //cleararray(randomnum, 5);

    //printf("After clearing:\n");
    //for (int i = 0; i < 5; i++) {
    //    printf("%d ", randomnum[i]);
    //}
    //printf("\n");
    //---------------------------- WF5 ------------------------
    //int unsortedarray[10] = { 34, 12, 32, 67, 43, 89, 54, 45, -1, -1 };

    //printf("Unsorted array:\n");
    //for (int i = 0; i < 10; i++) {
    //    printf("%d ", unsortedarray[i]);
    //}
    //printf("\n");

    //arraysort(unsortedarray, 10);

    //printf("Sorted array:\n");
    //for (int i = 0; i < 10; i++) {
    //    printf("%d ", unsortedarray[i]);
    //}
    //printf("\n");
    //return 0;
    //---------------------------- WF6------------------------
    //int arraytoRandomize[10] = { 1, 2, 3, 4, 5, 6, 7, 8, -1, -1 };

   //printf("Befour Randomiz:\n");
    //for (int i = 0; i < 10; i++) {
   //     printf("%d ", arraytoRandomize[i]);
    //}
    //printf("\n");
    //randomizarray(arraytoRandomize, 10);

    //printf("After Randomiz:\n");
    //for (int i = 0; i < 10; i++) {
    //    printf("%d ", arraytoRandomize[i]);
    //}
    //printf("\n");
    //return 0;
    //---------------------------- WF7 ------------------------
    //int arr1[5] = { 10, 20, 30, -1, -1 };
    //int arr2[5] = { -1, -1, -1, -1, -1 };

    //printf("Used elements in arr1: ");
    //printused(arr1, 5);
    //printf("\n");

    //printf("Used elements in array 2: ");
    //printused(arr2, 5);
    //printf("\n");

    //return 0;
    //---------------------------- WF8------------------------
    //int arr[8] = { 5, 10, 23,34,54,-1, -1, -1 };
    //printf("All elements in the array: ");
    //printall(arr, 8);
    //printf("\n");
    //return 0;
    //---------------------------- WF9------------------------
   // int arr1[6] = { 45, 12, 78, 23, 10, 65 };
    //int arr2[6] = { -1, -1, -1, -1, -1, -1 };

    //printf("Minimum of array 1: %d\n", arrayminimum(arr1, 6));
    //printf("Minimum of array 2: %d\n", arrayminimum(arr2, 6));

    //return 0;
    //---------------------------- WF10------------------------
   // int arr1[8] = { 33, 34, 65, 77, 23, -1,34,98 };
    //int arr2[6] = { -1, -1, -1, -1, -1,-1 };

    //printf("Maximum of array 1: %d\n", arraymaximum(arr1, 8));
    //printf("Maximum of array 2: %d\n", arraymaximum(arr2, 6));

    //return 0;
    //---------------------------- WF11------------------------
//int arr1[5] = { 10, 20, 30, 40, -1 };
//int arr2[5] = { -1, -1, -1, -1, -1 };

//printf("Average of array 1: %.2f\n", arraysaverage(arr1, 5));
//printf("Average of array 22: %.2f\n", arraysaverage(arr2, 5));

//return 0;
//---------------------------- WF12------------------------
//int arr1[7] = { 45, 12, 78, 23, 34, 33, -1 }; // odd number of elements
//int arr2[8] = { 10, 20, 30, 40, 50, 60, 70, -1 }; // even number of elements
//int arr3[5] = { -1, -1, -1, -1, -1 }; // empty

//printf("Median of array 1: %.2f\n", arraymedian(arr1, 7));
//printf("Median of array 2: %.2f\n", arraymedian(arr2, 8));
//printf("Median of array 3: %.2f\n", arraymedian(arr3, 5));

//return 0;
//---------------------------- WF13------------------------
   // int arr[5] = { 34, 65, 11, 23, -1 };
    //double variance = variancearray(arr, 5);

    //printf("Variance of arr: %.2f\n", variance);

    //return 0;
    //---------------------------- WF14------------------------
    //int devtestarray[8] = { 10, 20, 30, 40, 50, -1, -1, -1 };

    //printf("Variance: %.2f\n", variancearray(devtestarray, 8));
    //printf("Standard Deviation: %.2f\n", standevarray(devtestarray, 8));
    // ----------------------------- WF15 -----------------------------
   // int testarray[10] = { 5, 12, 34, -1, 22, -1, -1, 19, 45, -1 };

    //printf("\nCounting used elements\n");
    //printf("Array contents: ");
    //for (int i = 0; i < 10; i++) {
     //   printf("%d ", testarray[i]);
    //}
    //printf("\n");

    //int usedCount = arrayusedno(testarray, 10);
    //printf("Number of used elements: %d\n", usedCount);


 // -------------------- Menu System --------------------
        showMenu(); // Start the main menu loop
		printf_s("\nProgram terminated successfully.\n");// End message
        return 0;
}