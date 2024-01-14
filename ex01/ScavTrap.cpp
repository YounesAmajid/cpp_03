/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:03:29 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/13 20:56:44 by yamajid          ###   ########.fr       */
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

ScavTrap::ScavTrap(): ClapTrap("Scavtrap"){
    std::cout << "ScavTrap Default constructor called " << std::endl;
    this->EnergyPoints = 100;
    this->EnergyPoints = 50;
    this->attackDamage = 20;
}

void    ScavTrap::attack(const std::string& target)
{
    if (HitPoints > 0 && EnergyPoints > 0){
        EnergyPoints--;
        std::cout << "ScavpTrap attacks " << target << " causing "<< attackDamage <<" points of damage!" << std::endl;
    }
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    if (this != &other){
        name = other.name;
        EnergyPoints = other.EnergyPoints;
        attackDamage = other.attackDamage;
        HitPoints = other.HitPoints;
    }
    std::cout << "ScavTrap copy assignement operator called " << std::endl;
    return *this;
}
ScavTrap::ScavTrap(const ScavTrap& obj){
    name = obj.name;
    EnergyPoints = obj.EnergyPoints;
    attackDamage = obj.attackDamage;
    HitPoints = obj.HitPoints;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called " << std::endl;
}