#ifndef easyfind_HPP
# define easyfind_HPP
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &haystack, int needle)
{
	typename T::iterator	it;

	it = std::find(haystack.begin(), haystack.end(), needle);

	if (it == haystack.end())
		throw std::exception();

	return (it);
}

#endif