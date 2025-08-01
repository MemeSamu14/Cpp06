/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:37:10 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/01 18:08:07 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


//static_ cat reiteprestes dynimic

bool	is_numeric(const std::string &str)
{
	int	j = 0;
	for (int i = 0; i < static_cast<int>(str.length()); i++)
	{
		if (static_cast<int>(str.length()) > 1)
		{
			if (i == 0 && ((str[i] == '-') || (str[i] == '+')))
				continue ;
		}
		if (i > 0 && str[i] == '.')
		{
			j++;
			if (j == 2)
				return (false);
			continue ;
		}
		if (i + 1 == static_cast<int>(str.length()) && str[i] == 'f')
		{
			continue ;
		}
		if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}

bool	is_there_a_point(const std::string &str)
{
	for (int i = 0; i < static_cast<int>(str.length()); i++)
	{
		if (str[i] == '.')
			return (true);
	}
	return (false);
}

void	ScalarConverter::print_all_conversion() const
{
	if (this->getValue() == "-inff")
	{
		std::cout << "Char: ";
		std::cout << "-inff" << std::endl;
		std::cout << "Int: ";
		std::cout << "-inff" << std::endl;
		std::cout << "Float: ";
		std::cout << "-inff" << std::endl;
		std::cout << "Double: ";
		std::cout << "-inff" << std::endl;
	}
	else if (this->getValue() == "+inff")
	{
		std::cout << "Char: ";
		std::cout << "+inff" << std::endl;
		std::cout << "Int: ";
		std::cout << "+inff" << std::endl;
		std::cout << "Float: ";
		std::cout << "+inff" << std::endl;
		std::cout << "Double: ";
		std::cout << "+inff" << std::endl;
	}
	else if (this->getValue() == "nan")
	{
		std::cout << "Char: ";
		std::cout << "impossible" << std::endl;
		std::cout << "Int: ";
		std::cout << "impossible" << std::endl;
		std::cout << "Float: ";
		std::cout << "nanf" << std::endl;
		std::cout << "Double: ";
		std::cout << "nan" << std::endl;
	}
	else
	{
		std::string	integer_str;
		for (int i = 0; i < (int)(this->getValue().length()); i++)
		{
			if (this->getValue()[i] == '.')
				break ;
			integer_str.push_back(this->getValue()[i]);
		}
		std::cout << "char: ";
		if (integer_str.length() > 1 && is_numeric(integer_str) == false)
			std::cout << "impossible" << std::endl;
		else
		{
			if (is_numeric(integer_str) == true && (atoi(integer_str.c_str()) < 32 || atoi(integer_str.c_str()) == 127))
			{
				std::cout << "Non displayable" << std::endl;
			}
			else if (atoi(integer_str.c_str()) > 127)
				std::cout << "impossible" << std::endl;
			else if (is_numeric(integer_str) == true)
			{
				std::cout
				<< "'"
				<< static_cast<char>(atoi(integer_str.c_str()))
				<< "'"
				<< std::endl;	
			}
			else
			{
				std::cout
				<< "'"
				<< static_cast<char>(integer_str[0])
				<< "'"
				<< std::endl;
			}
		}
		std::cout << "int: ";
		if (integer_str.length() > 1 && is_numeric(integer_str) == false)
			std::cout << "impossible" << std::endl;
		else if (is_numeric(integer_str) == true)
		{
			std::cout << static_cast<int>(atoi(integer_str.c_str())) << std::endl;
		}
		else
		{
			if (integer_str.length() > 1)
				std::cout << "impossible" << std::endl;
			else
			{
				std::cout << static_cast<int>(integer_str[0]) << std::endl;
			}
		}

		std::cout << "float: ";
		if (this->getValue().length() > 1 && is_numeric(this->getValue()) == false)
			std::cout << "impossible" << std::endl;
		else if (is_numeric(this->getValue()) == true)
		{
			if (is_there_a_point(this->getValue()) == true)
			{
				std::cout << std::fixed << std::setprecision(1) 
				<< this->getValue().c_str() << "f"
				<< std::endl;
			}
			else
			{
				std::cout << std::fixed << std::setprecision(1) 
				<< static_cast<float>(atoi(this->getValue().c_str())) << "f"
				<< std::endl;
			}
		}
		else
		{
			if (this->getValue().length() > 1)
				std::cout << "impossible" << std::endl;
			else
			{
				std::cout << std::fixed << std::setprecision(1) 
				<< static_cast<float>(this->getValue()[0]) << std::endl;
			}
		}
		
		std::cout << "double: ";
		if (this->getValue().length() > 1 && is_numeric(this->getValue()) == false)
			std::cout << "impossible" << std::endl;
		else if (is_numeric(this->getValue()) == true)
		{
			if (is_there_a_point(this->getValue()) == true)
			{
				std::cout << std::fixed << std::setprecision(1) 
				<< this->getValue().c_str()
				<< std::endl;
			}
			else
			{
				std::cout << std::fixed << std::setprecision(1) 
				<< static_cast<double>(atoi(this->getValue().c_str()))
				<< std::endl;
			}
		}
		else
		{
			if (this->getValue().length() > 1)
				std::cout << "impossible" << std::endl;
			else
			{
				std::cout << std::fixed << std::setprecision(1) 
				<< static_cast<double>(this->getValue()[0]) << std::endl;
			}
		}
	}
}

