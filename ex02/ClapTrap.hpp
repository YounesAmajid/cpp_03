/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:02:34 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/12 16:45:57 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap{
    protected:
        std::string name;
        int HitPoints;
        int EnergyPoints;
        int attackDamage;
    public:
        ClapTrap();
        virtual ~ClapTrap();
        ClapTrap(std::string nm);
        ClapTrap& operator=(const ClapTrap& other);
        ClapTrap(const ClapTrap& obj);
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};