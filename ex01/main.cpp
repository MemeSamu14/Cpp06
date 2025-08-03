/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:24:43 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/03 11:14:44 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"


int	main(void)
{
	Data*	ptr = new Data("Messi");

	uintptr_t	raw = Serializer::serialize(ptr);
	Data		*ptr2 = Serializer::deserialize(raw);

	
	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "raw: " << raw << std::endl;
	std::cout << "ptr2: " << ptr2 << std::endl;

	delete ptr;

	return (0);
}