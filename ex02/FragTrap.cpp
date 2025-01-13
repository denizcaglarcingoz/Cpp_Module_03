#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

/* CONSTRUCTOR */
FragTrap::FragTrap()
{
	std::cout << "FragTrap unnamed constructor called." << std::endl;
	setName("name undefined");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}
FragTrap::FragTrap(std::string clapTrapName) : ClapTrap(clapTrapName)
{
	std::cout << "FragTrap " << clapTrapName << " constructed." << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

/* COPIES */
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}
FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}


void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << getName() << " is requesting the highest of fives you guys." << std::endl;
}

/* Destructor */
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " destructor called" << std::endl;
}
