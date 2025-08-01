/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:54:46 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/01 15:48:04 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

enum {
	CHAR = 0,
	INT = 1,
	FLOAT = 2,
	DOUBLE = 3
};

class ScalarConverter
{
	private:
		std::string	value;
	public:
		ScalarConverter(std::string value){this->value = value;};
		ScalarConverter(const ScalarConverter &a){this->value = a.getValue();};
		const ScalarConverter& operator=(const ScalarConverter &a){this->value = a.getValue(); return(*this);}
		const std::string&	getValue() const {return(this->value);};
		~ScalarConverter(){};
		void	print_all_conversion() const;
};


#endif