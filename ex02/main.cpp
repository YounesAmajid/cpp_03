/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:40:31 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/12 11:32:52 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (){
    ClapTrap test2;
    ScavTrap test;
    FragTrap test3;

    test2.attack("ClapTrap");
    test2.takeDamage(1);
    test2.beRepaired(1);
    std::cout << "------------------------------------" << std::endl;
    test.guardGate();
    test.attack("ClapTrap");
    test.takeDamage(1);
    test.beRepaired(1);
    std::cout << "------------------------------------" << std::endl;
    test3.attack("ClapTrap");
    test3.takeDamage(1);
    test3.beRepaired(1);
    test3.highFivesGuys();
    std::cout << "------------------------------------" << std::endl;

}