/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:21:38 by sophie            #+#    #+#             */
/*   Updated: 2026/07/03 14:59:39 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:

	ScavTrap();
	ScavTrap(const std::string _name);
	ScavTrap(const ScavTrap& other);
	ScavTrap &operator=(const ScavTrap& other);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};

#endif