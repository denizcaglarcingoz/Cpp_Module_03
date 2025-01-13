#include "ClapTrap.hpp"

//CONSTRUCTORS
ClapTrap::ClapTrap()
{
	_name = "name undefined";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	
	std::cout << "ClapTrap " << _name << " constructed." << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	
	std::cout << "ClapTrap " << _name << " constructed." << std::endl;
}

//COPIES
ClapTrap::ClapTrap(const ClapTrap& other)
{
	_name = other.getName();
	_hitPoints = other.getHitPoints();
	_energyPoints = other.getEnergyPoints();
	_attackDamage = other.getAttackDamage();
	std::cout << "New ClapTrap copied from Claptrap " << _name << std::endl;
}
ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDamage = other.getAttackDamage();
	}
	return *this;
}

//GETTERS
std::string	ClapTrap::getName()const
{
	return _name;
}
int			ClapTrap::getHitPoints()const
{
	return _hitPoints;
}
int			ClapTrap::getEnergyPoints()const
{
	return _energyPoints;
}
int			ClapTrap::getAttackDamage()const
{
	return _attackDamage;
}

//SETTERS
void			ClapTrap::setName(std::string name)
{
	_name = name;
}
void			ClapTrap::setHitPoints(int hitPoints)
{
	_hitPoints = hitPoints;
}

void			ClapTrap::setEnergyPoints(int energyPoints)
{
	_energyPoints = energyPoints;
}
void			ClapTrap::setAttackDamage(int attackDamage)
{
	_attackDamage = attackDamage;
}

// PLAY FUNCTIONS

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
		return ;
	}
	if (_energyPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " doesn't have enough Energy Points to attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks" << target << ", causing "<< _attackDamage << " damage." << std::endl;
	_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes damage of " << amount << " amount.";
	_hitPoints -= amount;
	std::cout << " New Hit point of "<< _name << "is " << _hitPoints << "." << std::endl;
}

void	ClapTrap::beReapired(unsigned int amount)
{
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
		return ;
	}
	if (_energyPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " doesn't have enough Energy Points." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " repairs itself " << amount << " amount.";
	_hitPoints += amount;
	_energyPoints--;
	std::cout << " New Hit points of "<< _name << "is " << _hitPoints;
	std::cout << ". New Energy points of "<< _name << "is " << _energyPoints << "." << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destructed."<< std::endl;
}