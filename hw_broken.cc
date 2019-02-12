/**
* \author James Fox
* \date February 11, 2019
* \file hw_broken.cc
*/

#include <iostream>
#include <vector>
#include <cmath>


/*!
*   \brief Function finds the standard deviation within a given array of numbers
*   \param a Pointer to the first element of an array
    \param n Size of array a
*   \return Returns a double standard deviation
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
