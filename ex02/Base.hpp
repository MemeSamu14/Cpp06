/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 11:25:56 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/03 11:48:58 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	private:
	public:
		virtual ~Base(){};
};

class A: public Base
{
	public:
		A():Base(){};
		~A(){};
};

class B: public Base
{
	public:
		B():Base(){};
		~B(){};
};

class C: public Base
{
	public:
		C():Base(){};
		~C(){};
};

#endif