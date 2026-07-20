/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:13:10 by sophie            #+#    #+#             */
/*   Updated: 2026/07/20 14:48:20 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
	Constructor/destructor, copy constructor and copy assignment operator
*/
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

/*
	Member functions
*/
void	FragTrap::highFivesGuys() {
	if (_hitPoints == 0) {
		std::cout << "FragTrap " << MAGENTA << _name << RESET << " can't high five, no hit point left :(\n";
		return ;
	}
	std::cout << "FragTrap " << MAGENTA << _name << RESET << " is asking for a high five!\n";
}