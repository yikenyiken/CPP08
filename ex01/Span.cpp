#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <stdexcept>

Span::Span() : N()
{
	// std::cout << "Span's Default Constructor called\n";
}

Span::Span(unsigned int N) : N(N)
{
	// std::cout << "Span's parametrized Constructor called\n";
}

Span::Span(const Span &other) 
{
	// std::cout << "Span's Copy Constructor called\n";

	*this = other;
}

Span::~Span() 
{
	// std::cout << "Span's Destructor called\n";
}


Span	&Span::operator = (const Span &rhs) 
{
	N = rhs.N;

	list.clear();
	for (size_t i = 0; i < rhs.list.size(); ++i)
		list.push_back(rhs.list[i]);

	return (*this);
}

void	Span::addNumber(int num)
{
	if (list.size() >= N)
		throw std::length_error("Span capacity exceeded");

	list.push_back(num);
}

void	Span::addRange(intVec::iterator start, intVec::iterator end)
{
	while (start != end)
		addNumber(*(start++));
}

long	Span::shortestSpan()
{
	long	shortest = LONG_MAX;
	long	adjacent_subt;

	if (list.empty() || list.size() == 1)
		throw NotEnoughElements();

	std::sort(list.begin(), list.end());

	for (intVec::iterator it = list.begin(); it != list.end(); ++it)
	{
		if (it + 1 == list.end())
			break ;

		adjacent_subt = abs(static_cast<long>(*it) - *(it + 1));

		if (adjacent_subt < shortest)
			shortest = adjacent_subt;
	}

	return (shortest);
}

long	Span::longestSpan()
{
	if (list.empty() || list.size() == 1)
		throw NotEnoughElements();

	intVec::iterator const	&greatest = std::max_element(list.begin(), list.end());
	intVec::iterator const	&smallest = std::min_element(list.begin(), list.end());

	return (static_cast<long>(*greatest) - *smallest);
}


char const	*Span::NotEnoughElements::what() const throw()
{
	return ("Not enough elements in span");
}