/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:41:51 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/02 19:36:46 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array{
	unsigned int	_size;
	T*				_arr;
	public:
		class	OutOfRangeException : public std::exception {
			public:
				virtual const char*	what() const throw()
				{
					return ("Index out of range!");
				}
		};
		Array() : _size(0), _arr(new T[0]) {};
		Array(unsigned int n) : _size(n), _arr(new T[n]()) {};
		Array(const Array& a) : _size(a._size), _arr(new T[a._size])
		{
			for(unsigned int i=0; i < this->_size; i++)
				this->_arr[i] = a._arr[i];
		}
		Array&	operator=(const Array& a)
		{
		   	if (this != &a)
			{
				this->~Array();
				this->_size = a._size;
				this->_arr = new T[a._size];
				for (unsigned int i=0; i < this->_size; i++)
					this->_arr[i] = a._arr[i];
			}
			return (*this); 
	   	}
		~Array() { delete[] this->_arr; std::cout << "Destructor called!" << std::endl;}

		T&	operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw (OutOfRangeException());
			return (this->_arr[i]);
		}

		const T&	operator[](unsigned int i) const
		{
			if (i >= this->_size)
				throw (OutOfRangeException());
			return (this->_arr[i]);
		}

		int	size() const
		{
			return (this->_size);
		}
		T*	getArr(void) const
		{
			return (this->_arr);
		}	
};
#endif
