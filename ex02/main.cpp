/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:51:06 by sophie            #+#    #+#             */
/*   Updated: 2026/07/20 11:34:22 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main() {
	std::cout << BLUE << "/* --------- Testing constructors, copy constructor and copy assignment --------- */\n"
		<< RESET;
	FragTrap	frag1("Frag");
	FragTrap	frag2("Kewan");
	FragTrap	frag3 = frag2;
	FragTrap	frag4("test1");
	FragTrap	frag5("test2");

	frag5 = frag4;

	std::cout << BLUE << "\n/* ------------ Testing attack() and Energy exhaustion ------------- */\n" << RESET;
	for (size_t i = 0; i < 101; ++i)
		frag1.attack("Kewan");
	
	std::cout << BLUE << "\n/* -------------- Testing highFiveGuys() -------------- */\n" << RESET;
	frag2.highFivesGuys();

	std::cout << BLUE << "\n/* --------- Testing Damage, Healing, and Death (100 HP) --------- */\n" << RESET;
	frag2.takeDamage(50);
    frag2.beRepaired(20);

    frag2.takeDamage(100); 

    frag2.attack("Frag");
    frag2.highFivesGuys();

	std::cout << BLUE << "\n/* ------------------- Object destruction ---------------- */\n"
        << RESET;
	
	return (0);
}