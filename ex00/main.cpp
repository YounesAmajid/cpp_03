/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:41:59 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/14 11:31:26 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (){
    ClapTrap a;
    ClapTrap b(a);
    ClapTrap p;
    
    p = a;
    a.attack("ClapTrack");
    a.takeDamage(5);
    a.beRepaired(10);
}