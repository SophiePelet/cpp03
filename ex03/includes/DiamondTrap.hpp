/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:42:00 by sophie            #+#    #+#             */
/*   Updated: 2026/07/03 16:13:04 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {
	public :

	DiamondTrap();
	DiamondTrap(const std::string _name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap &operator=(const DiamondTrap& other);
	~DiamondTrap();

	void	attack(const std::string& target);
	void	guardGate();
	void	highFivesGuys();
	void	whoAmI();
	
	private :

	std::string	_name;
};

#endif