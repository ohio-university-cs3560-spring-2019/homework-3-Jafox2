/**
* \author James Fox
* \date March 4, 2019
* \file hw7.cc
*/

#include <iostream>
#include <vector>
#include <cmath>
#include "hw7.h"


/*!
*   \brief Function finds the standard deviation within a given array of numbers
*   \return Returns a double standard deviation
*/
double deviation( int num, ...)
{
    va_list args;

    va_start(args, num);

    std::vector<int> num_list;
    double sum;
    for(int i = 0; i < num; i++)
    {
            int tmp = va_arg(args, int);
            num_list.push_back(tmp);
            sum += tmp;
    }

    va_end(args);

    double mean = sum / num_list.size();
    double stddev = 0;
    for(size_t i = 0; i < num_list.size(); i++)
    {
            stddev = stddev + (num_list[i] - mean) * (num_list[i] - mean);
    }
    stddev /= num_list.size();

    if( stddev == 0)
            std::cout << "Sigma is zero." << std::endl;

    return sqrt(stddev);
}
