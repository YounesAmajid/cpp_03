/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:40:31 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/13 20:27:30 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (){
    ClapTrap test2;
    ScavTrap test;
    ScavTrap test3(test);

    // test2 = test;
    test2.attack("ClapTrap");
    test2.takeDamage(1);
    test2.beRepaired(1);
    std::cout << "------------------------------------" << std::endl;
    test.attack("ClapTrap");
    test.takeDamage(1);
    test.beRepaired(1);
    test.guardGate();
}