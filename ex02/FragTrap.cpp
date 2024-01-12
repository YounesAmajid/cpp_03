/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:00:35 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/11 20:16:45 by yamajid          ###   ########.fr       */
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
    std::cout << " FragTrap Default constructor called " << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << " FragTrap Destructor called " << std::endl;
}