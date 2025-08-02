/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:49:50 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/02 17:20:08 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "uintptr_t.hpp"

int	main( void )
{
	Data *p = new Data("siuuu");
	// uintptr_t	ptr(p);

	// ptr = Serializer::serialize(p);
	// Data		*ptr2 = Serializer::deserialize(ptr);

	std::cout << "Data p       : " << &p << std::endl;
	// std::cout << "uintptr_t ptr: " << &ptr << std::endl;
	// std::cout << "Data ptr     : " << &ptr2 << std::endl;
}