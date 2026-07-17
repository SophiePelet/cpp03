/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:47:40 by sophie            #+#    #+#             */
/*   Updated: 2026/07/17 19:16:00 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
	Constructor/destructor, copy constructor and copy assignment operator
*/
DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called\n";
	this->_name = "Default";
	ClapTrap::_name = "Default_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackPoints = FragTrap::_attackPoints;
}
DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name) {
	std::cout << "DiamondTrap constructor called\n";
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackPoints = FragTrap::_attackPoints;
}
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap copy constructor called\n";
	this->_name = other._name;
	ClapTrap::_name = other.ClapTrap::_name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap copy assignment operator called\n";
	if (this != &other) {
		this->_name = other._name;
		ClapTrap::_name = other.ClapTrap::_name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackPoints = other._attackPoints;
	}
	return (*this);
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called\n";
}

/*
	Member functions
*/
void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}
void	DiamondTrap::guardGate() {
	ScavTrap::guardGate();
}
void	DiamondTrap::highFivesGuys() {
	FragTrap::highFivesGuys();
}
void	DiamondTrap::whoAmI() {
	std::cout << "My Clap name is: " << MAGENTA << ClapTrap::_name << RESET << "\n";
	std::cout << "My name is: " << MAGENTA << DiamondTrap::_name << RESET << "\n";
}