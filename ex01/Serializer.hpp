/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:26:46 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/03 11:11:25 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"

typedef unsigned long uintptr_t;

class Serializer
{
	private:

	public:
		Serializer(){};
		~Serializer(){};
		static uintptr_t	serialize(Data* ptr){return (reinterpret_cast<uintptr_t>(ptr));};
		static Data*		deserialize(uintptr_t raw){return (reinterpret_cast<Data *>(raw));};
};

#endif