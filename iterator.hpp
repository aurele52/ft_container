#ifndef iterator_CLASS_H
# define iterator_CLASS_H

#include "main.hpp"

namespace ft
{

template <typename Category, typename T, typename Distance = std::ptrdiff_t, typename Pointer = T*, typename Reference = T&>
class iterator : public std::iterator<std::input_iterator_tag, T>
{

	public:

	iterator( void ){}
	iterator( iterator const & src ) {*this = src;}
	~iterator( void ) {}

	iterator & operator=( iterator const & rhs )
	{
		(void)rhs;
		return (*this);
	};
};

}

#endif
