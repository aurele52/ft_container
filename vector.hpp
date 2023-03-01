#ifndef vector_CLASS_H
# define vector_CLASS_H

#include "main.hpp"

namespace ft
{

template <typename T, typename Alloc = std::allocator<T> >
class vector
{

	typedef T value_type;
	typedef Alloc allocator_type;
	typedef typename allocator_type::reference reference;
	typedef typename allocator_type::const_reference const_reference;
	typedef typename allocator_type::pointer pointer;
	typedef typename allocator_type::const_pointer const_pointer;
	typedef std::random_access_iterator_tag<T> iterator;
	typedef std::random_access_iterator_tag<const T> const_iterator;
	typedef std::reverse_iterator<iterator> reverse_iterator;
	typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
	typedef std::ptrdiff_t difference_type;
	typedef size_t size_type;



	public:

	explicit vector( const allocator_type& alloc = allocator_type()) : allocate(alloc), start(0), last(0), storage_end(0) {}
	explicit vector( size_type n, const value_type& val = value_type(), const allocator_type &alloc = allocator_type() ) : allocate(alloc) 
	{
		if (n >= allocate.size_max())
			throw (std::length_error("allocator can't allocate more than size_max objet"));
		start = allocate.allocate(n);
		last = start;
		storage_end = start + n;
		while (last != storage_end)
		{
			allocate.construct(last, val);
			last++;
		}
	}
	template <class InputIterator>
	vector (InputIterator first, InputIterator last, const allocator_type &alloc = allocator_type()) : allocate(alloc) {}
	vector( const vector & x ) {*this = x;}
	~vector( void ) {}

	iterator end( void ) { return (this->last);}
	iterator begin( void ) { return (this->start);}
	const_iterator end( void ) const { return (this->last);}
	const_iterator begin( void ) const { return (this->start);}
	
	size_type size( void ) const
	{
		size_type b = last - start;
		return (b);
	}

	size_type max_size( void ) const { return (allocate.max_size());}
	
	size_type capacity( void ) const
	{
		size_type a = storage_end - start;
		return (a);
	}

	bool empty( void ) const {if (size() == 0) return (true); else return (false);}

	vector & operator=( vector const & rhs )
	{
		(void)rhs;
		return (*this);
	};
/*
	void reserve(size_type n)
	{
		if (n > max_size())
			throw (std::length_error("allocator can't allocate more"));
		if (n > capacity())
		{
			pointer mem = allocate.allocate(n);
			for (long unsigned int i = 0; i < size(); i++)
			{
				*(mem + i) = *(start + i);
				allocate.destroy(start + i);
			}
			allocate.deallocate(start, capacity());
			start = mem;
			last = mem + size();
			storage_end = start + n;
		}
	}
*/
	void reserve(size_type n)
	{
		if (n > max_size())
			throw (std::length_error("allocator can't allocate more"));
		if (n > capacity())
		{
			pointer mem = allocate.allocate(n);
			pointer newend = mem;

			for (iterator it = begin(); it < end(); it++)
			{
				allocate.construct(mem, *it);
				allocate.destroy(&(*it));
				newend++;
			}
			allocate.deallocate(start, capacity());
			start = mem;
			last = newend;
			storage_end = start + n;
		}
	}
	void push_back(const value_type &add)
	{
		if (last >= storage_end)
		{
			reserve(size() > 0 ? size() * 2 : 1);
		}
		std::cout << "11111111111111111111111" << std::endl;
		allocate.construct(last, add);
		last++;
		std::cout << "11111111111111111111111" << std::endl;
	}

	protected:

	allocator_type allocate;
	pointer			start;
	pointer			last;
	pointer			storage_end;


};

}
#endif
