/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:08:57 by sophie            #+#    #+#             */
/*   Updated: 2026/07/03 15:12:35 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:

	FragTrap();
	FragTrap(const std::string _name);
	FragTrap(const FragTrap& other);
	FragTrap &operator=(const FragTrap& other);
	~FragTrap();

	void	highFivesGuys();
};

#endif