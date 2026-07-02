/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:17:55 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/02 16:03:29 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap	clap1("Clap");
	ClapTrap	clap2("Kewan");
	ClapTrap	clap3 = clap2;

	for (size_t i = 0; i < 11; ++i)
		clap1.attack("Kewan");
	
	clap2.takeDamage(9);
	clap2.attack("Clap");
	clap2.attack("Clap");
	
	for (size_t i = 0; i < 9; ++i)
		clap2.beRepaired(1);
	
	return (0);
}