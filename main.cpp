#include <iostream>

double deviation( int* a, int n);

int main()
{
	  int a[9] = {4,9,11,12, 17, 5, 8, 12, 14};
	  //int s = a.size();
		std::cout << deviation(a, 9) << std::endl;
}
