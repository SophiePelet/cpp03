/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:21:56 by sophie            #+#    #+#             */
/*   Updated: 2026/07/17 20:04:43 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
	Constructor/destructor, copy constructor and copy assignment operator
*/
ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called\n";
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackPoints = 20;
}
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called\n";
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackPoints = 20;
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called\n";
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
}
ScavTrap &ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap copy assignment operator called\n";
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackPoints = other._attackPoints;
	}
	return (*this);
}
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called\n";
}

/*
	Member functions
*/
void ScavTrap::attack(const std::string& target) {
	if (_energyPoints == 0) {
		std::cout << "ScavTrap " << MAGENTA << _name << RESET
			<< " can't attack, energy points are insufficient\n";	
		return ;
	}
	else if (_hitPoints == 0) {
		std::cout << "ScavTrap " << MAGENTA << _name << RESET
			<< " can't attack, no hit points left\n";
		return ;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << MAGENTA << _name << RESET << RED << " attacks " << RESET
		<< CYAN << target << RESET << ", causing " << RED << _attackPoints
			<< RESET << " points of damage!\n";
	return ;
}

void ScavTrap::guardGate() {
	if (_hitPoints == 0) {
		std::cout << "ScavTrap " << MAGENTA << _name << RESET
			<< " can't enter guard mode, energy points are insufficient\n";	
		return ;
	}
	std::cout << "ScavTrap " << MAGENTA << _name << RESET << " is now in gate keeping mode\n";
	return ;
}