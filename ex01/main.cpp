#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	ScavTrap	Anne;
	ScavTrap	Bob("Bob");

	std::string anneName = "Anne";
	Anne.setName(anneName);

	
	Anne.attack("Bob");
	Bob.takeDamage(Anne.getAttackDamage());

	Anne.guardGate();
	Anne.setAttackDamage(1);
	ScavTrap Bobby(Anne);
	std::cout <<"Bobby name " << Bobby.getName()<< std::endl;
	std::cout <<"Bobby attack damage value " << Bobby.getAttackDamage() << std::endl;
	Anne.attack("Bob");
	Bob.takeDamage(Anne.getAttackDamage());
	
	Bob.beReapired(12);

	Anne.setEnergyPoints(0);
	Anne.attack("Bob");

	Bob.setHitPoints(0);
	Bob.attack("Anne");

	return 0;
}