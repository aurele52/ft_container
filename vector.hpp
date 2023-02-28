#ifndef vector_CLASS_H
# define vector_CLASS_H

#include "main.hpp"

namespace ft
{

template <typename T, typename Alloc = std::allocator<T> >
class vector : public std::vector<T>
{

	typedef T value_type;
	typedef Alloc allocator_type;
	typedef typename allocator_type::reference reference;
	typedef typename allocator_type::const_reference const_reference;
	typedef typename allocator_type::pointer pointer;
	typedef typename allocator_type::const_pointer const_pointer;
	typedef ft::random_access_iterator<T> iterator;
	typedef ft::random_access_iterator<const T> const_iterator;
	typedef ft::reverse_iterator<iterator> reverse_iterator;
	typedef ft::reverse_iterator<const_iterator> const_reverse_iterator;
	typedef std::ptrdiff_t difference_type;
	typedef size_t size_type;



	public:

	vector( void ){}
	vector( vector const & src ) {*this = src;}
	~vector( void ) {}

	vector & operator=( vector const & rhs )
	{
		(void)rhs;
		return (*this);
	};
};

}
#endif
