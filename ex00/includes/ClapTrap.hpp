/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:22:46 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/02 15:54:36 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define MAGENTA	"\033[1m\033[35m"
#define CYAN	"\033[1m\033[36m"

class	ClapTrap {
	public:

	ClapTrap();
	ClapTrap(const std::string _name);
	ClapTrap(const ClapTrap& other);
	ClapTrap &operator=(const ClapTrap& other);
	~ClapTrap();
	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	private:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackPoints;
};

#endif