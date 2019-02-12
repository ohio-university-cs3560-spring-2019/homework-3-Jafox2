#include <iostream>
#include <vector>
#include <cmath>

//	  int a[4] = {1,2,3,4};

/**     \file hw_broken.cc   */

/**
*   \brief This formula finds the standard deviation within a given array of numbers
*   \param This function takes two parameters, some array 'a' and the size of that array 'n'
*   \return This function returns a double standard deviation
*
*/

double deviation( int* a, int n )
{
    int* v = a;
	double sum;
	for(size_t i = 0; i <= n-1; i++)
	{
		sum += a[i];
	}

	double mean = sum / n;
	double stddev = 0;
	for(size_t i = 0; i <= n -1; i++)
	{
		stddev = stddev + (v[i] - mean) * (v[i] - mean);
	}
	//std::cout << "E stdev = " << stddev << std::endl;
	stddev /= n;
    //std::cout << "E stdev / n = " << stddev << std::endl;

	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
