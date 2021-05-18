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
* @file stats.c * 
* @brief This file performs a statistical analysis on an array of numbers. 
* * * The file contains functions that calculate information such as the mean, mediam, max * 
* and minimum of an array of numbers and prints the information to the command line. * * 
* @author Andrew Troy * 
* @date 3/30/2021 * */ 

#include <stdio.h> 
#include "stats.h" 

/* Size of the Data Set */ 
#define SIZE (40) 

void main() { 
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100, 90}; 
  /* Other Variable Declarations Go Here */ 
  unsigned char *ptr = test;
  /* Statistics and Printing Functions Go Here */ 
  sort_array(SIZE, ptr);
  printf("The sorted array is:\n");
  print_array(SIZE, ptr);
  unsigned char mean = find_mean(SIZE, ptr);
  unsigned char median = find_median(SIZE, ptr);
  unsigned char maximum = find_maximum(SIZE, ptr);
  unsigned char minimum = find_minimum(SIZE, ptr);
  print_statistics(mean, median, maximum, minimum);
} 
    
/* Add other Implementation File Code Here */ 

void print_statistics(unsigned char mean, unsigned char median, unsigned char maximum, unsigned char minimum){
  printf("The mean is: "); 
  printf("%d\n", mean);
  printf("The median is: "); 
  printf("%d\n", median);
  printf("The maximum is: "); 
  printf("%d\n", maximum); 
  printf("The minimum is: "); 
  printf("%d\n", minimum);
} 

void print_array(int length, unsigned char *ptr){
  for (int i = 0; i < length; i++){
    printf("[%d] %d\n",i,*(ptr+i));
  }
} 

unsigned char find_median(int length, unsigned char *ptr){
  sort_array(length,ptr);
  unsigned char median;
  if (length % 2 == 0){
    median = (*(ptr + length / 2 - 1) + *(ptr + length / 2)) / 2;
  }
  else {
    median = *(ptr + length / 2 - 1);
  }
  return median;
}
unsigned char find_maximum(int length, unsigned char *ptr){ 
  int i;
  unsigned char maximum = *ptr; 
  for (i = 0; i < length; ++i) { 
    if (*(ptr + i) > maximum) { 
      maximum = *(ptr + i); }
    } 
  return maximum; 
} 
unsigned char find_minimum(int length, unsigned char *ptr){ 
  int i; 
  unsigned char minimum = *ptr; 
  for (i = 0; i < length; ++i) { 
    if (*(ptr + i) < minimum) { 
      minimum = *(ptr + i); 
    } 
  }  
  return minimum; 
} 

unsigned char find_mean(int length, unsigned char *ptr){
  int i;
  int sum = 0;
  unsigned char mean = 0;
  if ( ptr == NULL){
    return 0;
  }
  if ( length <= 0 ) {
    length = 1;
  }
  for(i = 0; i < length; i++){
    sum += *(ptr+i);  
  } 
  mean = sum / length;
  return mean;
}

void sort_array(int length, unsigned char *ptr){
  unsigned char temp_arr[length];
  // create temporary array from which to pick the sorted values
  for (int i = 0; i < length; i++){
    temp_arr[i] = *(ptr+i);
  }
  // find the maximum of the current array, copy it to arr[] and then change its value to 0. Repeat.
  int maximum;
  for (int i = 0; i < length; i++){
    maximum = find_maximum(length, temp_arr);
    for (int j = 0; j < length; j++){
      if (temp_arr[j] == maximum){
        *(ptr+i) = maximum;
        temp_arr[j] = 0;
        break;
      }   
    }
  }
}
