/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 05:41:29 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/02 05:52:39 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(const T& a, const T&b)
{
	return (a < b ? a : b);
}

template <typename T>
T	max(const T& a, const T&b)
{
	return (a > b ? a : b);
}
#endif
