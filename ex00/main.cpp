#include <iostream>
#include <vector>
#include "easyfind.hpp"

#define TOFIND 12

int main() {

	int	arr[] = {12, 20, 33, 29, 10};
	std::vector<int> vec;

	for (size_t i = 0; i < sizeof(arr) / sizeof(int); ++i)
		vec.push_back(arr[i]);

	try
	{
		std::vector<int>::iterator	it = easyfind(vec, TOFIND);

		std::cout << *it << " was found in vec" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "could not find " << TOFIND << " in vec" << std::endl;
	}

	return 0;
}
