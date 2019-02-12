/*!
	Takes an array of integers and and integer that is
   	equivalent to the elements in that array as parameters,
   	then it converts that array into a vector to find the
   	sum, then the mean, then ultimately the standard 
   	deviation of all the elements in the initial array,
   	then returns that standard deviation.
*/  
///  Author:     Jacob Butch   
///  Date:	 11 February 2019
                                                                    

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*! The function that is used to find the standard deviation using an array of integers and the size of the array. */
double deviation(int* a /*!< Array of integers used to find standard deviation*/, int n /*!< Size of array */)
{
  vector<int> v/*!v- Vector to hold the array in for simplicity. */; 
  for(size_t i = 0; i < n; i++)
  {
    v.push_back(a[i]);
  }

  int sum = 0;
  for(size_t i = 0; i <= v.size(); i++)
  {
    sum += v[i];
  } 
  double mean = sum /= v.size();
  double stddev = 0;
  double x = 1.0/v.size();
  double y;
  for(size_t i = 0; i <= v.size(); i++)
  {
    y = v[i];
    stddev += (y - mean) * (y - mean);
  }
  stddev = (x*stddev);
  if( stddev == 0)
    std::cout << "Sigma is zero." << std::endl;
  
  return sqrt(stddev);
}
