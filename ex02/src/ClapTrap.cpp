/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:22:34 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/17 20:01:48 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
	Constructor/destructor, copy constructor and copy assignment operator
*/
ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackPoints(0){
	std::cout << "ClapTrap default constructor called\n";
}
ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackPoints(0) {
	std::cout << "ClapTrap constructor called\n";
}
ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "ClapTrap copy constructor called\n";
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackPoints = other._attackPoints;
}
ClapTrap &ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap copy assignment operator called\n";
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackPoints = other._attackPoints;
	}
	return (*this);
}
ClapTrap::~ClapTrap() { std::cout << "ClapTrap destructor called\n"; }

/*
	Member functions
*/
void	ClapTrap::attack(const std::string& target) {
	if (_energyPoints == 0) {
		std::cout << "ClapTrap " << MAGENTA << _name << RESET
			<< " can't attack, energy points are insufficient\n";	
		return ;
	}
	else if (_hitPoints == 0) {
		std::cout << "ClapTrap " << MAGENTA << _name << RESET
			<< " can't attack, no hit points left\n";
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << MAGENTA << _name << RESET << RED << " attacks " << RESET
		<< CYAN << target << RESET << ", causing " << RED << _attackPoints << RESET
			<< " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints < amount) {
		std::cout << "ClapTrap " << MAGENTA << _name << RESET
			<< " hit points dropped to 0\n";
		_hitPoints = 0;
		return ;
	}
	_hitPoints -= amount;
	std::cout << "ClapTrap " << MAGENTA << _name << RESET << " was attacked and loses "
		<< RED << amount << RESET << " hit points\n";
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints == 0) {
		std::cout << "ClapTrap " << MAGENTA << _name << RESET
			<< " can't heal, energy points are insufficient\n";	
		return ;
	}
	else if (_hitPoints == 0) {
		std::cout << "ClapTrap " << MAGENTA << _name << RESET
			<< " can't heal, no hit points left\n";
		return ;
	}
	else if (_hitPoints == 10) {
		std::cout << "ClapTrap " << MAGENTA << _name << RESET << " is already full life\n";
		return ;
	}
	_hitPoints += amount;
	_energyPoints--;
	std::cout << "ClapTrap " << MAGENTA << _name << RESET
		<< GREEN << " healed " << RESET << "itself and regains " << GREEN
			<< amount << RESET << " hit points!\n";
}