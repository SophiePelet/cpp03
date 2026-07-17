/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:17:55 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/17 19:40:33 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	std::cout << BLUE << "/* --------- Testing constructors, copy constructor and copy assignment --------- */\n"
		<< RESET;
	ClapTrap	clap1("Clap");
	ClapTrap	clap2("Kewan");
	ClapTrap	clap3 = clap2;
	ClapTrap	clap4("test1");
	ClapTrap	clap5 ("test2");

	clap4 = clap5;

	std::cout << BLUE << "\n/* --------------- Testing attack()/beRepaired and Energy exhaustion ----------- */\n"
        << RESET;
	for (size_t i = 0; i < 11; ++i)
		clap1.attack("Kewan");
		
	clap2.takeDamage(9);
	for (size_t i = 0; i < 9; ++i)
		clap2.beRepaired(1);
	
	std::cout << BLUE << "\n/* ------------------- Testing takeDamage() and Death ---------------- */\n"
        << RESET;
	clap2.takeDamage(5);
    clap2.beRepaired(2);
    clap2.takeDamage(20);
    clap2.attack("Clap");
    clap2.beRepaired(5);

	std::cout << BLUE << "\n/* ------------------- Object destruction ---------------- */\n"
        << RESET;
	
	return (0);
}