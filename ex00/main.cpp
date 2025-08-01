/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:34:10 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/01 15:48:12 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main( int argc, char **argv )
{
	if (argc == 2)
	{
		std::string chr = argv[1];
		ScalarConverter a(chr);
		(void)argc;
		a.print_all_conversion();
	}
	return (0);
}
