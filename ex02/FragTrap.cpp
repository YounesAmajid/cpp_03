/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:00:35 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/13 20:57:10 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " gives high fives to everyone!" << std::endl;
}

FragTrap::FragTrap(std::string nm): ClapTrap(nm){
    this->EnergyPoints = 100;
    this->EnergyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(): ClapTrap(){
    this->EnergyPoints = 100;
    this->EnergyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap Default constructor called " << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor called " << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
    if (this != &other){
        name = other.name;
        EnergyPoints = other.EnergyPoints;
        attackDamage = other.attackDamage;
        HitPoints = other.HitPoints;
    }
    std::cout << "FragTrap copy assignement operator called " << std::endl;
    return *this;
}
FragTrap::FragTrap(const FragTrap& obj){
    name = obj.name;
    EnergyPoints = obj.EnergyPoints;
    attackDamage = obj.attackDamage;
    HitPoints = obj.HitPoints;
    std::cout << "FragTrap copy constructor called" << std::endl;
}