// CST116SRS06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "samstddev.h"

const int SIZE{  }; // Enter the number of elements in your array.

// Sample standard deviation
double samp_std_dev{}; 

int main()
{
	int sample[SIZE] = { }; // Enter your data here. It must be the same number as SIZE.

	// Call function to find Sample standard deviation and return the result.
	samp_std_dev = find_samp_std_dev(sample, SIZE);

	// Print the Sample Standard Deviation
	std::cout << samp_std_dev << std::endl;
	
	return 0;
}

double find_samp_std_dev(int sample[], int size)
{
	// declare all variables
	int i{};
	double mean{};
	double sum{};
	double sum2{};
	double samp_vari{}; //the sample variation
	double result{};
	
	// Get the mean of the array that is named sample. 
	for (i = 0; i < size; i++)
	{
		sum += sample[i];
	}
	mean = sum / SIZE;

	// For each element, subtract the mean and square the result.
	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + (sample[i] - mean) * (sample[i] - mean);
	}
	
	// Take the sum2 and calcuate the sample variance
	samp_vari = sum2 * (1.0 / (SIZE - 1));

	// Get the square root of the sample variance.
	result = sqrt(samp_vari);

	return result;
}

	
