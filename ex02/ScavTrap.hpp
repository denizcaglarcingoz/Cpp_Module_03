#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap
{
	public:
					ScavTrap();
					ScavTrap(std::string clapTrapName);

					ScavTrap(const ScavTrap& other);
		ScavTrap&	operator=(const ScavTrap& other);

		void		guardGate();
		void		attack(const std::string& target);

					~ScavTrap();
};


#endif