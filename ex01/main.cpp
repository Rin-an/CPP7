/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 06:04:39 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/02 16:40:04 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
int	main()
{
	{
		int	arr[5] = {1,3,5,7,10};

		iter(arr, 5, &(print_ele));
		std::cout << "arr[5]= {";
		for (int i=0; i < 5; i++)
		{
			std::cout << arr[i];
			if (i < 4)
				std::cout << ",";
			else
				std::cout << "}" << std::endl;
		}
	}
	{
		char	str[5] = {'a','G','f','s','z'};
	
		iter(str, 5, &(print_ele));
		std::cout << "str[5]= {";
		for (int i=0; i < 5; i++)
		{
			std::cout << str[i];
			if (i < 4)
				std::cout << ",";
			else
				std::cout << "}" << std::endl;
		}
	}
	return 0;
}
