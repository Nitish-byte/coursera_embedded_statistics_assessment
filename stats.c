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
 * @brief This code calculates different statistic parameters of a data set
 *
 * This code contains the following functions    
main() - The main entry point for your program
    print_statistics() - A function that prints the statistics of an array including minimum, 				 maximum, mean, and median.
    print_array() -  prints the array to the screen
    find_median() -  returns the median value
    find_mean() -  returns the mean
    find_maximum() -  returns the maximum
    find_minimum() -  returns the minimum
    sort_array() -  sorts the array from largest to smallest.
 *
 * @author Nitish Wadhavkar
 * @date 14th April 2020 
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  puts("DATA:");
  print_array(test, SIZE);
  puts("\nSORTED DATA:");
  print_array(sort_array(test, SIZE), SIZE);
  puts("\nSTATISTICS:");
  print_statistics(test,SIZE);

}

void print_statistics(unsigned char * data_set,unsigned int data_set_length){
	printf("Median  = %.1f\n", find_median(data_set, data_set_length));
	printf("Mean    = %.3f\n", find_mean(data_set, data_set_length));
	printf("Maximum = %d\n", find_maximum(data_set, data_set_length));
	printf("Minimum = %d\n", find_minimum(data_set, data_set_length));
}

void print_array(unsigned char * data_set, unsigned int data_set_length){
	for(int i=0;i<data_set_length;i++){
		printf("%d,", data_set[i]);
	}
printf("\n");
}

float find_median(unsigned char * data_set, unsigned int data_set_length){
  data_set = sort_array(data_set, data_set_length);
  float median;
  if(SIZE % 2 == 0){
    median = (data_set[data_set_length/2] + data_set[(data_set_length/2)-1])/2.0;
  }else{
    median = data_set[data_set_length/2];
  }
  return median;
}
  
float find_mean(unsigned char * data_set, unsigned int data_set_length){
  float sum = 0.0;
  for(int i=0; i<data_set_length; i++){
    sum += data_set[i];
  }
  return sum/data_set_length;
}

unsigned int find_maximum(unsigned char * data_set, unsigned int data_set_length){
  unsigned int maximum = 0;
  for(int i=0; i<data_set_length; i++){
    if(data_set[i] > maximum){
      maximum = data_set[i];
    }
  }
  return maximum;
}
  
unsigned int find_minimum(unsigned char * data_set, unsigned int data_set_length){
  unsigned int minimum = data_set[0];
  for(int i=1; i<data_set_length; i++){
    if(data_set[i] < minimum){
      minimum = data_set[i];
    }
  }
  return minimum;
}

unsigned char* sort_array(unsigned char * data_set, unsigned int data_set_length){
  for(int i=data_set_length-1; i>=0; i--){
    for(int j=0; j<i; j++){
      if(data_set[j]<data_set[j+1]){
        unsigned char temp = data_set[j];
        data_set[j] = data_set[j+1];
        data_set[j+1] = temp;
      }
    }
  }  
  return data_set;
}











