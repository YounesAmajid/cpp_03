/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:42:09 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/12 14:52:57 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap{
    private:
        std::string name;
        int HitPoints;
        int EnergyPoints;
        int attackDamage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string nm);
        ClapTrap& operator=(const ClapTrap& other);
        ClapTrap(const ClapTrap& obj);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};