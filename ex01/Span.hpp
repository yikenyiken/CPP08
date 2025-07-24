#ifndef Span_HPP
# define Span_HPP
# include <vector>

class Span
{
	private:
		unsigned int		N;
		std::vector <int>	list;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		~Span();

		Span	&operator = (const Span &rhs);
		void	addNumber(int num);
};

#endif