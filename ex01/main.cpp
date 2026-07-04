/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:51:06 by sophie            #+#    #+#             */
/*   Updated: 2026/07/04 11:58:03 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	ScavTrap	scav1("Scav");
	ScavTrap	scav2("Kewan");
	ScavTrap	scav3 = scav2;

	for (size_t i = 0; i < 11; ++i)
		scav1.attack("Kewan");
	
	scav2.takeDamage(9);
	scav2.attack("Scav");
	scav2.attack("Scav");
	scav2.guardGate();
	
	for (size_t i = 0; i < 9; ++i)
		scav2.beRepaired(1);
	
	return (0);
}