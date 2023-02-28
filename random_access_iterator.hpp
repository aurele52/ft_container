#ifndef random_access_iterator_CLASS_H
# define random_access_iterator_CLASS_H

#include "main.hpp"

namespace ft
{

template <typename T>
class random_access_iterator : public ft::iterator<std::random_access_iterator_tag, T>
{

	public:

	random_access_iterator( void ){}
	random_access_iterator( random_access_iterator const & src ) {*this = src;}
	~random_access_iterator( void ) {}

	random_access_iterator & operator=( random_access_iterator const & rhs )
	{
		(void)rhs;
		return (*this);
	};
};

}

#endif
