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
 * @brief This file is to be included in stats.h
 *
 * It contains the function declarations
 *
 * @author Nitish Wadhavkar
 * @date 14th April 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Prints the statistical data
 *
 * This function prints minimum, maximum, mean and median of an array
 *
 * @param data_set the array
 * @param data_set_length the length of the array 'data_set'
 *
 * @return void
 */

void print_statistics(unsigned char *,unsigned int);

/**
 * @brief Prints the data_set(array)
 *
 * Given an array of data and a length, prints the array 
 *
 * @param data_set the array
 * @param data_set_length the length of the array 'data_set'
 * 
 * @return void 
 */
void print_array(unsigned char *, unsigned int);

/**
 * @brief returns the median value
 *
 * Computes the median value of the data set
 *
 * @param data_set the array to be analysed
 * @param data_set_length the length of the array 'data_set'
 * 
 * @return the median value of 'data_set'
 */
float find_median(unsigned char *, unsigned int);

/**
 * @brief returns the mean
 *
 * Computes the mean value of the data set
 *
 * @param data_set the array to be analysed
 * @param data_set_length the length of the array 'data_set'
 * 
 * @return the mean value of 'data_set'
 */
float find_mean(unsigned char *, unsigned int);

/**
 * @brief returns the maximum value
 *
 * Finds the maximum value of the dataset
 *
 * @param data_set the array to be analysed
 * @param data_set_length the length of the array 'data_set'
 * 
 * @return the maximum value of 'data_set'
 */
unsigned int find_maximum(unsigned char *, unsigned int);

/**
 * @brief returns the minimum value
 *
 * Finds the minimum value of the dataset
 *
 * @param data_set the array to be analysed
 * @param data_set_length the length of the array 'data_set'
 * 
 * @return the minimum value of 'data_set'
 */
unsigned int find_minimum(unsigned char *, unsigned int);

/**
 * @brief sorts an array
 *
 * Given an array of data and a length, sorts the array from largest to
 * smallest. (The zeroth Element is the largest value, and the last
 * element (n-1) is the smallest value.)
 *
 * @param data_set the array to be analysed
 * @param data_set_length the length of the array 'data_set'
 * 
 * @return pointer to the sorted array
 */
unsigned char* sort_array(unsigned char *, unsigned int);


#endif /* __STATS_H__ */
