/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:40:31 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/13 14:12:58 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (){
    ScavTrap test2;
    FragTrap test3;
    ClapTrap test1(test2);

    test1 = test2;
    test1.attack("ClapTrap");
    test1.takeDamage(1);
    test1.beRepaired(1);
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    test2.guardGate();
    test2.attack("ClapTrap");
    test2.takeDamage(1);
    test2.beRepaired(1);
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    test3.attack("ClapTrap");
    test3.takeDamage(1);
    test3.beRepaired(1);
    test3.highFivesGuys();
    std::cout << "------------------------------------" << std::endl;
}