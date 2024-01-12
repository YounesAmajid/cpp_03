/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:40:31 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/11 19:58:49 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (){
    ScavTrap test;
    ClapTrap test2;

    test.guardGate();
    test.attack("ClapTrap");
    test.takeDamage(1);
    test.beRepaired(1);
    std::cout << "------------------------------------" << std::endl;
    test2.attack("ClapTrap");
    test2.takeDamage(1);
    test2.beRepaired(1);
}