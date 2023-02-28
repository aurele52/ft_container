#ifndef reverse_iterator_CLASS_H
# define reverse_iterator_CLASS_H

#include "main.hpp"

namespace ft
{

template <typename Iterator>
class reverse_iterator : public ft::iterator<typename std::iterator_traits<Iterator>::iterator_category,
							typename std::iterator_traits<Iterator>::value_type,
							typename std::iterator_traits<Iterator>::difference_type,
							typename std::iterator_traits<Iterator>::pointer,
							typename std::iterator_traits<Iterator>::reference>
{

	public:

	reverse_iterator( void ){}
	reverse_iterator( reverse_iterator const & src ) {*this = src;}
	~reverse_iterator( void ) {}

	reverse_iterator & operator=( reverse_iterator const & rhs )
	{
		(void)rhs;
		return (*this);
	};
};

}

#endif
