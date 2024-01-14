/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:00:41 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/14 11:44:56 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap& operator=(const FragTrap& other);
        FragTrap(const FragTrap& obj);
        void highFivesGuys(void); 
};