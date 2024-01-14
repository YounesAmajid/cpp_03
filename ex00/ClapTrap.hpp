/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:42:09 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/14 11:21:14 by yamajid          ###   ########.fr       */
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
        ClapTrap(std::string nm);
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator=(const ClapTrap& other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();
};