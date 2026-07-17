/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:51:06 by sophie            #+#    #+#             */
/*   Updated: 2026/07/17 19:40:43 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	std::cout << BLUE << "/* --------- Testing constructors, copy constructor and copy assignment --------- */\n"
		<< RESET;
	ScavTrap	scav1("Scav");
	ScavTrap	scav2("Kewan");
	ScavTrap	scav3 = scav2;
	ScavTrap	scav4("test1");
	ScavTrap	scav5("test2");

	scav5 = scav4;

	std::cout << BLUE << "\n/* --------- Testing attack() and Energy exhaustion (50 EP) --------- */\n" << RESET;
    for (size_t i = 0; i < 51; ++i)
        scav1.attack("Kewan");
    
    std::cout << BLUE << "\n/* --------- Testing guardGate() --------- */\n" << RESET;
    scav2.guardGate();
    
    std::cout << BLUE << "\n/* --------- Testing Damage, Healing, and Death (100 HP) --------- */\n" << RESET;
    scav2.takeDamage(50);
    scav2.takeDamage(100); 
    scav2.attack("Scav");
    scav2.guardGate();

	std::cout << BLUE << "\n/* ------------------- Object destruction ---------------- */\n"
        << RESET;

	return (0);
}