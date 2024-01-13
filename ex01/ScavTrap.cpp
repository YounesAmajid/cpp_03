/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:03:29 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/12 16:14:35 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string nm): ClapTrap(nm){
    this->EnergyPoints = 100;
    this->EnergyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(): ClapTrap(){
    std::cout << " ScavTrap Default constructor called " << std::endl;
    this->EnergyPoints = 100;
    this->EnergyPoints = 50;
    this->attackDamage = 20;
}

void    ScavTrap::attack(const std::string& target)
{
    if (HitPoints > 0 && EnergyPoints > 0){
        EnergyPoints--;
        std::cout << "ScavtTrap attacks " << target  << std::endl;
    }
}

ScavTrap::~ScavTrap(){
    std::cout << " ScavTrap Destructor called " << std::endl;
}