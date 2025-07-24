#include "Span.hpp"
#include <iostream>
#include <stdexcept>

Span::Span()
{
	std::cout << "Span's Default Constructor called\n";
}

Span::Span(unsigned int N)
{
	std::cout << "Span's parametrized Constructor called\n";
}

Span::Span(const Span &other) 
{
	std::cout << "Span's Copy Constructor called\n";

	*this = other;
}

Span::~Span() 
{
	std::cout << "Span's Destructor called\n";
}


Span	&Span::operator = (const Span &rhs) 
{
	(void)rhs;

	return (*this);
}

void	Span::addNumber(int num)
{
	if (list.size() == N)
		throw std::length_error();
	list.push_back(num);	
}