/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:08:51 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/02 17:17:34 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"
#include "uintptr_t.hpp"
#include <cstdint>

// class Data;

class Serializer
{
private:
	const std::string name;
public:
	Serializer(const std::string &name):name(name){};
	~Serializer(){};
	static uintptr_t serialize(Data* ptr){return (reinterpret_cast<uintptr_t *>(ptr));};
	// static Data* deserialize(uintptr_t raw)
	// {
	// 	uintptr_t *a = &raw;
	// 	return (reinterpret_cast<Data *>(a));
	// };
};


#endif