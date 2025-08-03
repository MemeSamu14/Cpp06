/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 11:24:42 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/03 12:14:48 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Base.hpp"
#include <cstdlib>
#include <typeinfo>

Base *generate(void)
{

	srand(time(0));
	int randomNum = rand() % 91;
	Base *a = NULL;

	if (randomNum >= 0 && randomNum < 30)
	{
		std::cout << "A created" << std::endl;
		a = new A();
	}
	else if (randomNum >= 30 && randomNum < 60)
	{
		std::cout << "B created" << std::endl;
		a = new B();
	}
	else if (randomNum >= 60 && randomNum <= 90)
	{
		std::cout << "C created" << std::endl;
		a = new C();
	}
	return (a);
}

void	identify(Base* p)
{
	if (A* a = dynamic_cast<A*>(p))
		std::cout << "is an A type" << std::endl;
	if (B* a = dynamic_cast<B*>(p))
		std::cout << "is an B type" << std::endl;
	if (C* a = dynamic_cast<C*>(p))
		std::cout << "is an C type" << std::endl;
}

void	identify(Base& p)
{
	try
	{ 
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "is an A type" << std::endl;
	}
	catch (const std::bad_cast& e){}

	try
	{
		B& a = dynamic_cast<B&>(p);
		(void)a;
		std::cout << "is an B type" << std::endl;
	}
	catch (const std::bad_cast& e){}
	
	try
	{
		C& a = dynamic_cast<C&>(p);
		(void)a;
		std::cout << "is an C type" << std::endl;
	}
	catch (const std::bad_cast& e){}
}

int	main(void)
{
	Base *a = generate();
	identify(a);
	identify(*a);
	delete a;
	return (0);
}