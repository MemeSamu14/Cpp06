/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uintptr_t.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:31:46 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/02 17:08:21 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNITPTR_T_HPP
# define UNITPTR_T_HPP

class uintptr_t
{
private:
	void	*data;
public:
	uintptr_t(void *data){this->data = data;};
	~uintptr_t(){};
};


#endif