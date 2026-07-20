/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:47:40 by sophie            #+#    #+#             */
/*   Updated: 2026/07/20 15:16:17 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
	Constructor/destructor, copy constructor and copy assignment operator
*/
DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name") {
	std::cout << "DiamondTrap default constructor called\n";
	this->_name = "Default";
	ClapTrap::_name = "Default_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackPoints = 30;
}
DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap constructor called\n";
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackPoints = 30;
}
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	std::cout << "DiamondTrap copy constructor called\n";
	this->_name = other._name;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap copy assignment operator called\n";
	if (this != &other) {
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		this->_name = other._name;
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
	std::cout << "My name is: " << MAGENTA << DiamondTrap::_name << RESET
		<< " and my ClapTrap name is: " << MAGENTA << ClapTrap::_name << RESET << "\n";
}