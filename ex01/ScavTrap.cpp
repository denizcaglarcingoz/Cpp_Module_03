#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called." << std::endl;
	setName("name undefined");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}
ScavTrap::ScavTrap(std::string clapTrapName)
{
	std::cout << "ScavTrap " << clapTrapName << " constructed." << std::endl;
	setName(clapTrapName);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}


ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}
ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		setName(other.getName());
		setHitPoints(other.getHitPoints());
		setEnergyPoints(other.getEnergyPoints());
		setAttackDamage(other.getAttackDamage());
	}
	return *this;
}


void	ScavTrap::attack(const std::string& target) 
{
	std::cout << "ScavTrap " << getName() <<" attacks " << target << ", ";
	ClapTrap::attack(target);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " destructor called" << std::endl;
}