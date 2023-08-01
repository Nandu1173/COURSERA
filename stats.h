/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Definitions and macros required for the c1m1 assignment
 *
 *
 * @author Bassa Nandu chandra Swamy
 * @date 2/8/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of a given array
 *
 * This function takes the resulting statistics calculated on an array,
 * which include the minimum, maximum, mean, and median values, and prints
 * those values on the screen.
 *
 * @param minimum The minimum value in the given array
 * @param maximum The maximum value in the given array
 * @param mean The mean value of the given array
 * @param median The median value of the given array
 *
 * @return void
 */
void print_statistics(unsigned char minimum, unsigned char maximum, float mean, unsigned char median);


/**
 * @brief Prints the contents of a given array
 *
 * This function takes a pointer to the first element of the array
 * and the number of elements in the array, and prints the array elements
 * to the screen.
 *
 * @param array Pointer to the first element of the array to be printed
 * @param counter The number of elements in the array
 *
 * @return void
 */
void print_array(unsigned char *array, unsigned int counter);


/**
 * @brief Finds the median of the given array
 *
 * This function takes a pointer to the first element of the array and
 * the number of elements in the array, and finds the median value of
 * the array.
 *
 * @param array Pointer to the first element of the array to be processed
 * @param counter The number of elements in the array
 *
 * @return median The median value of the given array.
 */
unsigned char find_median(unsigned char *array, unsigned int counter);

/**
 * @brief Finds the mean of the given array
 *
 * This function takes a pointer to the first element of the array and
 * the number of elements in the array, and finds the mean value of
 * the array.
 *
 * @param array Pointer to the first element of the array to be processed
 * @param counter The number of elements in the array
 *
 * @return mean The mean value of the given array.
 */
float find_mean(unsigned char *array, unsigned int counter);

/**
 * @brief Finds the maximum of the given array
 *
 * This function takes a pointer to the first element of the array and
 * the number of elements in the array, and finds the maximum value of
 * the array.
 *
 * @param array Pointer to the first element of the array to be processed
 * @param counter The number of elements in the array
 *
 * @return maximum The maximum value of the given array.
 */
unsigned char find_maximum(unsigned char *array, unsigned int counter);

/**
 * @brief Finds the minimum of the given array
 *
 * This function takes a pointer to the first element of the array and
 * the number of elements in the array, and finds the minimum value of
 * the array.
 *
 * @param array Pointer to the first element of the array to be processed
 * @param counter The number of elements in the array
 *
 * @return minimum The minimum value of the given array.
 */
unsigned char find_minimum(unsigned char *array, unsigned int counter);

/**
 * @brief Sorts the given array in descending order
 *
 * This function takes a pointer to the first element of the array and
 * the number of elements in the array, sorts the array in descending order
 * using bubble sort, and modifies the original array.
 *
 * @param array Pointer to the first element of the array to be sorted
 * @param counter The number of elements in the array
 *
 * @return void
 */
void sort_array(unsigned char *array, unsigned int counter);

#endif /* __STATS_H__ */
