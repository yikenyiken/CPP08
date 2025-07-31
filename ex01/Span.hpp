#ifndef Span_HPP
# define Span_HPP
# include <vector>

typedef std::vector<int> intVec;

class Span
{
	private:
		unsigned int	N;
		intVec			list;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		~Span();

		Span	&operator = (const Span &rhs);
		void	addNumber(int num);
		void	addRange(intVec::iterator start, intVec::iterator end);
		long	shortestSpan();
		long	longestSpan();
	private:
		class NotEnoughElements : public std::exception
		{
			char const	*what() const throw();
		};
};

#endif