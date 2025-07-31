#include <exception>
#include <iostream>
#include "Span.hpp"
#define GARB_CAP 10000

int main() {

	Span	sp(10);
	intVec	vec;
	int		myarr[] = {100, 33, 44, 22, 77, 55, 66, 11};

	for (size_t i = 0; i < sizeof(myarr) / sizeof(*myarr); ++i)
		vec.push_back(myarr[i]);

	sp.addRange(vec.begin(), vec.end());

	sp.addNumber(2);
	sp.addNumber(-1);

	std::cout << "sp longest span: " << sp.longestSpan() << std::endl;
	std::cout << "sp shortest span: " << sp.shortestSpan() << std::endl;

	try
	{
		sp.addNumber(1000);
		sp.addNumber(1000);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// 10,000
	std::cout << std::endl;

	int		garb[GARB_CAP];
	Span	spGarb(GARB_CAP);

	for (int i = 0; i < GARB_CAP; ++i)
		spGarb.addNumber(garb[i]);

	std::cout << "spGarb longest span: " << spGarb.longestSpan() << std::endl;
	std::cout << "spGarb shortest span: " << spGarb.shortestSpan() << std::endl;

	return 0;
}