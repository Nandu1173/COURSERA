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
 * @file stats.c
 * @brief The implementation file of the c1m1 assignment
 *
 * This file includes all the required functions implementations in the c1m1 assignment
 *
 * @author Bassa Nandu Chandra Swamy
 * @date 02/08/2023
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 389, 202, 179, 151, 173, 111, 17, 23,
                              184, 86, 55, 76, 123, 117, 212, 28,
                              100, 182, 150, 90, 92, 87, 177, 24,
                              206, 66, 2, 43, 78, 42, 5, 67,
                              70, 97, 150, 450, 319, 113, 400, 99 };

  /* Other Variable Declarations Go Here */
  unsigned char minimum = 0;
  unsigned char maximum = 0;
  float mean = 0;
  unsigned char median = 0;

  /* Statistics and Printing Functions Go Here */
  printf("Array before sorting: \n");
  print_array(test, SIZE);
  sort_array(test, SIZE);
  median = find_median(test, SIZE);
  mean = find_mean(test, SIZE);
  maximum = find_maximum(test, SIZE);
  minimum = find_minimum(test, SIZE);
  print_statistics(minimum, maximum, mean, median);
  printf("Array after sorting: \n");
  print_array(test, SIZE);
}
void print_statistics(unsigned char minimum, unsigned char maximum, float mean, unsigned char median) {
  printf("The minimum is %d \n", minimum);
  printf("The maximum is %d \n", maximum);
  printf("The mean is %f \n", mean);
  printf("The median is %d \n", median);
}
void print_array(unsigned char array[], unsigned int counter) {
  for (int i = 0; i < counter; i++) {
    printf("%d,", array[i]);
  }
  printf("\n");
}
unsigned char find_median(unsigned char array[], unsigned int counter) {
  unsigned char median = 0;
  // Assuming the array is already sorted in ascending order
  if (counter % 2 == 0) {
    median = (array[counter / 2 - 1] + array[counter / 2]) / 2;
  } else {
    median = array[counter / 2];
  }
  return median;
}

float find_mean(unsigned char array[], unsigned int counter) {
  unsigned int accumulator = 0;
  float mean = 0;
  for (int i = 0; i < counter; i++) {
    accumulator = accumulator + array[i];
  }
  printf("acc = %d \n", accumulator);
  mean = (float)accumulator / (float)counter;
  return mean;
}

unsigned char find_maximum(unsigned char array[], unsigned int counter) {
  unsigned char maximum = array[0];
  for (int i = 1; i < counter; i++) {
    if (array[i] > maximum) {
      maximum = array[i];
    }
  }
  return maximum;
}

unsigned char find_minimum(unsigned char array[], unsigned int counter) {
  unsigned char minimum = array[0];
  for (int i = 1; i < counter; i++) {
    if (array[i] < minimum) {
      minimum = array[i];
    }
  }
  return minimum;
}

void sort_array(unsigned char array[], unsigned int counter) {
  char flag = 0;
  unsigned char temp;
  do {
    flag = 0;
    for (int index = 0; index < counter - 1; index++) {
      if (array[index] > array[index + 1]) {
        temp = array[index];
        array[index] = array[index + 1];
        array[index + 1] = temp;

        flag = 1;
      }
    }
  } while (flag == 1);

}
