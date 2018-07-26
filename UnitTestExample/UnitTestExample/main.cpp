#include <iostream>
#include "./myMath.h"
int main()
{
	std::cout << "This is a GoogleTest Example..." << std::endl;
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		
		sum = myMath::add(sum, i);
	}
	std::cout << sum <<std::endl;

	double c = 1.23, d = 3.24;
	std::cout << myMath::dec(d, c) << std::endl;
	return 0;
}