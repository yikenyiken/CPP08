#ifndef MutantStack_HPP
# define MutantStack_HPP
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
 		typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack() {}
        MutantStack(MutantStack const &other) : std::stack<T>(other) {}
        ~MutantStack() {}

        MutantStack	&operator = (const MutantStack &rhs) { static_cast< std::stack<T> &>(*this) = rhs; return (*this); }
		iterator	begin() { return (this->c.begin()); }
		iterator	end() { return (this->c.end()); }
};

#endif 