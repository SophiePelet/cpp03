/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:51:06 by sophie            #+#    #+#             */
/*   Updated: 2026/07/03 16:16:28 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main() {
	DiamondTrap	Diamond0;
	DiamondTrap	Diamond1("Diamond");
	DiamondTrap	Diamond2("Kewan");
	DiamondTrap	Diamond3 = Diamond2;

	for (size_t i = 0; i < 11; ++i)
		Diamond1.attack("Kewan");
	
	Diamond2.takeDamage(9);
	Diamond2.attack("Diamond");
	Diamond2.attack("Diamond");
	Diamond1.guardGate();
	Diamond3.highFivesGuys();
	Diamond2.whoAmI();
	
	for (size_t i = 0; i < 9; ++i)
		Diamond2.beRepaired(1);
	
	return (0);
}