/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:13:10 by sophie            #+#    #+#             */
/*   Updated: 2026/07/04 12:03:31 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors/destructor, copy constructor and copy assignement operator
FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called\n";
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackPoints = 30;
}
FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called\n";
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackPoints = 30;
}
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called\n";
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
}
FragTrap &FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap copy assignment operator called\n";
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackPoints = other._attackPoints;
	}
	return (*this);
}
FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n";
}

// Member function
void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << MAGENTA << _name << RESET << " is asking for a high five!\n";
}