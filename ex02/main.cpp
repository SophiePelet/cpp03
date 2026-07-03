/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:51:06 by sophie            #+#    #+#             */
/*   Updated: 2026/07/03 15:22:02 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main() {
	FragTrap	frag1("Frag");
	FragTrap	frag2("Kewan");
	FragTrap	frag3 = frag2;

	for (size_t i = 0; i < 11; ++i)
		frag1.attack("Kewan");
	
	frag2.takeDamage(9);
	frag2.attack("Frag");
	frag2.attack("Frag");
	frag2.highFivesGuys();
	
	for (size_t i = 0; i < 9; ++i)
		frag2.beRepaired(1);
	
	return (0);
}