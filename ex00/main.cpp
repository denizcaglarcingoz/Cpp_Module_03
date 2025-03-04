#include "ClapTrap.hpp"
#include <iostream>




int main( void )
{
	ClapTrap	Anne;
	ClapTrap	Bob("Bob");

	std::string anneName = "Anne";
	Anne.setName(anneName);

	
	Anne.attack("Bob");
	Bob.takeDamage(Anne.getAttackDamage());

	Anne.setAttackDamage(1);
	Anne.attack("Bob");
	Bob.takeDamage(Anne.getAttackDamage());
	
	Bob.beReapired(12);

	Anne.setEnergyPoints(0);
	Anne.attack("Bob");

	Bob.setHitPoints(0);
	Bob.attack("Anne");

	return 0;
}