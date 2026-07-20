/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:51:06 by sophie            #+#    #+#             */
/*   Updated: 2026/07/20 13:16:47 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main() {
	std::cout << BLUE << "/* --------- Testing constructors, copy constructor and copy assignment --------- */\n"
		<< RESET;
	DiamondTrap	diamond0;
	DiamondTrap	diamond1("Diamond");
	DiamondTrap	diamond2("Kewan");
	DiamondTrap	diamond3 = diamond2;
	DiamondTrap	diamond4("test1");
	DiamondTrap	diamond5("test2");

	diamond5 = diamond4;

	std::cout << BLUE << "/* ----------------- Testing whoAmI() ----------------- */\n" << RESET;
	diamond0.whoAmI();
	diamond2.whoAmI();
	diamond5.whoAmI();

	std::cout << BLUE << "\n/* ------------ Testing attack() and Energy exhaustion ------------- */\n" << RESET;
	for (size_t i = 0; i < 51; ++i)
		diamond1.attack("Kewan");

	std::cout << BLUE << "\n/* ------------ Testing Inherited Special Abilities ------------- */\n" << RESET;
	diamond1.guardGate();
	diamond3.highFivesGuys();
	
	std::cout << BLUE << "\n/* ------------ Testing Damage, Healing, and Death (100 HP) ------------- */\n" << RESET;

	diamond2.takeDamage(50);
	diamond2.beRepaired(20);

	diamond2.takeDamage(100);

	diamond2.attack("Diamond");
	diamond2.guardGate();
	diamond2.whoAmI();

	std::cout << BLUE << "\n/* ------------------- Object destruction ---------------- */\n"
        << RESET;
	return (0);
}