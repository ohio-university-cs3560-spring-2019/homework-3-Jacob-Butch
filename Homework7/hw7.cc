#include "hw7.h"
#include <iostream>
#include <cmath>

using namespace std;

double stddev(int count, ...) 
{
	double sum = 0; //Sum for the integers
	va_list args; //Arguments provided
	size_t i; //Used for for loops
	va_start(args, count); 
	for (i = 0; i < count; i++)
	{
		sum += va_arg(args, int);	//Get the sum of all of the integers
	}
	va_end(args);

	double mean;	//Average of the numbers
	mean = sum / count; //Find the average of the numbers
	double stddev = 0; //Variable used to find the standard deviation

	va_start(args, count); 
	for (i = 0; i < count; i++)
	{
		int n = va_arg(args, int); 
		stddev += ((n - mean)*(n-mean)); 
	}
	va_end(args); 

	stddev /= count;
	return sqrt(stddev);	//Return square root of stddev to get actual standard deviation
}