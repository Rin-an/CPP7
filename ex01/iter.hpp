/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 06:04:51 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/02 16:37:59 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
# include <iostream>

template<typename T>
void	print_ele(const T& var)
{
	std::cout << var << std::endl;
}

template<typename A>
void	iter(A* arr, int len, void f(const A&))
{
	for(int i=0; i < len; i++)
		f(arr[i]);
}
#endif
