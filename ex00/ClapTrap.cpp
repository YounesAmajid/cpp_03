/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:42:17 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/14 11:35:22 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("ClapTrap"), HitPoints(10), EnergyPoints(10), attackDamage(0){
        std::cout << "Default constructor called" << std::endl;    
}

ClapTrap::ClapTrap(std:: string nm): name(nm), HitPoints(10), EnergyPoints(10), attackDamage(0){
    std::cout << "param contructor called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj){
    name = obj.name;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    attackDamage = obj.attackDamage;
    std::cout << "Copy constructor called" << std::endl;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    if (this != &other){
        this->name = other.name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "Copy assignement operator called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (HitPoints > 0 && EnergyPoints > 0){
        EnergyPoints--;
        std::cout << "ClapTrap attacks " << target << " causing" << attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (HitPoints > 0 && EnergyPoints > 0){
        HitPoints -= amount;
        std::cout << name << "Damaged and losed " << amount << " point from the Hit Point, the Energy points now is : "<< EnergyPoints << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if ((HitPoints > 0 ) && (EnergyPoints > 0)){
        EnergyPoints--;
        HitPoints += amount;
        std::cout << name << "Repairing and get " << amount << " point, the Energy points now is : " << EnergyPoints << std::endl;
    }
}

ClapTrap ::~ClapTrap() {
    std::cout << "Destructor called " << std::endl;
}
